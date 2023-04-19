#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N, M;
int meltingTime = 0;
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int paper[101][101];
bool visit[101][101];

bool cheeze() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (paper[i][j]) return true;
		}
	}
	return false;
}

void melting() {
	int x, y, nx, ny;
	int paperCopy[N][M];
	queue<pair<int, int> > q;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			paperCopy[i][j] = paper[i][j];
	}
	memset(visit, false, sizeof(visit));
	meltingTime++;
	q.push(make_pair(0, 0));
	visit[0][0] = true;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (visit[nx][ny] || nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (paper[nx][ny]) paper[nx][ny]++;
			if (!paper[nx][ny]) {
				q.push(make_pair(nx, ny));
				visit[nx][ny] = true;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (paper[i][j] - 1 > 1)
				paperCopy[i][j] = 0;
			paper[i][j] = paperCopy[i][j];
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			cin >> paper[i][j];
	}
	while (cheeze()) melting();
	cout << meltingTime << '\n';
}
