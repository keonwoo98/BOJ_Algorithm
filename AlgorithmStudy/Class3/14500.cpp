#include <iostream>
#include <cstring>
using namespace std;

int N, M, ans;
int map[500][500];
bool visit[500][500];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void dfs(int x, int y, int sum, int depth) {
	visit[x][y] = true;
	if (depth == 3) {
		ans = max(ans, sum);
		return;
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (visit[nx][ny] || nx < 0 || nx >= N || ny < 0 || ny >= M)
			continue;
		dfs(nx, ny, sum + map[nx][ny], depth + 1);
		visit[nx][ny] = false;
	}
}

void shape1(int x, int y) {
	int sum = 0;
	sum = map[x][y] + map[x][y + 1] + map[x][y + 2] + map[x - 1][y + 1];
	ans = max(ans, sum);
}

void shape2(int x, int y) {
	int sum = 0;
	sum = map[x][y] + map[x][y + 1] + map[x][y + 2] + map[x + 1][y + 1];
	ans = max(ans, sum);
}

void shape3(int x, int y) {
	int sum = 0;
	sum = map[x][y] + map[x + 1][y] + map[x + 2][y] + map[x + 1][y + 1];
	ans = max(ans, sum);
}

void shape4(int x, int y) {
	int sum = 0;
	sum = map[x][y] + map[x][y + 1] + map[x - 1][y + 1] + map[x + 1][y + 1];
	ans = max(ans, sum);
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			memset(visit, false, sizeof(visit));
			dfs(i, j, map[i][j], 0);
			if (i - 1 >= 0 && j + 2 < M) shape1(i, j);
            if (j + 2 < M && i + 1 < N) shape2(i, j);
            if (i + 2 < N && j + 1 < M) shape3(i, j);
            if (i + 1 < N && i - 1 >= 0 && j + 1 < M) shape4(i, j);
		}
	}
	cout << ans << '\n';
}
