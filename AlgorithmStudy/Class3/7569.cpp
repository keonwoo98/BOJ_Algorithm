#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int M, N, H;
int graph[101][101][101];
queue<tuple<int, int, int> > q;

void bfs() {
	int x, y, z, nx, ny, nz;
	int dx[6] = { -1, 1, 0, 0, 0, 0 };
	int dy[6] = { 0, 0, -1, 1, 0, 0 };
	int dz[6] = { 0, 0, 0, 0, 1, -1 };

	while (!q.empty()) {
		z = get<0>(q.front());
		x = get<1>(q.front());
		y = get<2>(q.front());
		q.pop();
		for (int i = 0; i < 6; i++) {
			nz = z + dz[i];
			nx = x + dx[i];
			ny = y + dy[i];
			if (nz < 0 || nz >= H || nx < 0 || nx >= N || ny < 0 || ny >= M || graph[nz][nx][ny])
				continue;
			graph[nz][nx][ny] = graph[z][x][y] + 1;
			q.push(make_tuple(nz, nx, ny));
		}
	}
}

int main() {
	int day = 0;

	cin >> M >> N >> H;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++){
				cin >> graph[i][j][k];
				if (graph[i][j][k] == 1)
					q.push(make_tuple(i, j, k));
			}
		}
	}
	bfs();
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (!graph[i][j][k]) {
					cout << "-1\n";
					return 0;
				}
				if (day < graph[i][j][k])
					day = graph[i][j][k];
			}
		}
	}
	cout << day - 1 << '\n';
}
