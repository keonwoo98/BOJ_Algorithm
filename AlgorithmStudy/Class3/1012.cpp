#include <iostream>
#include <string.h>
using namespace std;

int M, N;
int graph[50][50];

bool dfs(int i, int j) {
	if (i < 0 || i >= N || j < 0 || j >= M)
		return false;
	if (graph[i][j]) {
		graph[i][j] = 0;
		dfs(i - 1, j);
		dfs(i, j - 1);
		dfs(i + 1, j);
		dfs(i, j + 1);
		return true;
	}
	return false;
}

int main() {
	int T, K, x, y, cnt;

	cin >> T;
	while (T--) {
		cnt = 0;
		cin >> M >> N >> K;
		memset(graph, 0, M * N);
		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			graph[y][x] = 1;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++)
				if (dfs(i, j))
					cnt++;
		}
		cout << cnt << '\n';
	}
}
