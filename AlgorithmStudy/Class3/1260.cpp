#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

bool visit[1001];
vector<int> graph[1001];

void dfs(int x) {
	visit[x] = true;
	cout << x << ' ';
	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visit[y])
			dfs(y);
	}
}

void bfs(int start) {
	queue<int> q;
	q.push(start);
	visit[start] = true;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << ' ';
		for (int i = 0; i < graph[x].size(); i++) {
			int y = graph[x][i];
			if (!visit[y]) {
				q.push(y);
				visit[y] = true;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, V, l1, l2;

	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		cin >> l1 >> l2;
		graph[l1].push_back(l2);
		graph[l2].push_back(l1);
	}
	for (int i = 1; i <= N; i++)
		sort(graph[i].begin(), graph[i].end());
	dfs(V);
	cout << '\n';
	memset(visit, false, sizeof(visit));
	bfs(V);
	cout << '\n';
}
