#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int V, node, dist;
bool visit[100001] = { false };
vector<pair<int, int> > graph[100001];

int dfs(int p, int d) {
	if (visit[p])
		return 0;
	visit[p] = true;
	if (dist < d) {
		dist = d;
		node = p;
	}
	int len = 0;
	vector<int> v;
	for (int i = 0; i < graph[p].size(); i++) {
		len = visit[graph[p][i].first] ? 0 : graph[p][i].second;
		v.push_back(dfs(graph[p][i].first, d + len) + len);
	}
	int max = 0;
	for (int i = 0; i < v.size(); i++)
		max = max < v[i] ? v[i] : max;
	return max;
}

int main() {
	graph[0].push_back(make_pair(0, 0));
	cin >> V;
	for (int i = 0; i < V; i++) {
		int n, e, p, d;
		vector<pair<int, int> > v;
		cin >> n;
		while (true) {
			cin >> e;
			if (e == -1) break;
			p = e;
			cin >> d;
			graph[n].push_back(make_pair(p, d));
		}
	}
	dfs(1, 0);
	memset(visit, false, sizeof(visit));
	int max = dfs(node, 0);
	cout << max << '\n';
}
