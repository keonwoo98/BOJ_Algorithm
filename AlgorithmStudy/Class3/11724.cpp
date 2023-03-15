#include <iostream>
#include <vector>
using namespace std;

int N, M;
bool visit[1001] = { false };
vector<int> graph[1001];

void dfs(int x) {
	visit[x] = true;
	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visit[y])
			dfs(y);
	}
}

int main() {
	int u, v, cnt = 0;

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= N; i++) {
		if (!visit[i]) {
			dfs(i);
			cnt++;
		}
	}
	cout << cnt << '\n';
}
