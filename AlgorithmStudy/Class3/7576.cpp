#include <iostream>
#include <queue>
using namespace std;

int M, N;
int graph[1001][1001];
queue<pair<int, int> > q;

void bfs() {
	int x, y, nx, ny;
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M || graph[nx][ny])
				continue;
			graph[nx][ny] = graph[x][y] + 1;
			q.push(make_pair(nx, ny));
		}
	}
}

int main() {
	int day = 0;

	cin >> M >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> graph[i][j];
			if (graph[i][j] == 1)
				q.push(make_pair(i, j));
		}
	}
	bfs();
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!graph[i][j]) {
				cout << "-1\n";
				return 0;
			}
			if (day < graph[i][j])
				day = graph[i][j];
		}
	}
	cout << day - 1 << '\n';
}
