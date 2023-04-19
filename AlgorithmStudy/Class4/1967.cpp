#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int node, dist;
bool visit[10001] = { false };
vector<pair<int, int> > graph[10001];

int dfs(int n, int d) {
	if (visit[n]) return 0;
	visit[n] = true;
	if (dist < d) {
		dist = d;
		node = n;
	}
	int len = 0;
	vector<int> v;
	for (int i = 0; i < graph[n].size(); i++) {
		len = visit[graph[n][i].first] ? 0 : graph[n][i].second;
		v.push_back(dfs(graph[n][i].first, d + len) + len);
	}
	int max = 0;
	for (int i = 0; i < v.size(); i++)
		max = max < v[i] ? v[i] : max;
	return max;
}

int main() {
	int n, s, e, d;

	cin >> n;
	for (int i = 1; i < n; i++) {
		cin >> s >> e >> d;
		graph[s].push_back(make_pair(e, d));
		graph[e].push_back(make_pair(s, d));
	}
	dfs(1, 0);
	memset(visit, false, sizeof(visit));
	cout << dfs(node, 0) << '\n';
}
