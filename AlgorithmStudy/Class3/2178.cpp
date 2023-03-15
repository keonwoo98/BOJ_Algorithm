#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int N, M;
int moveCnt[100][100] = { 0 };
vector<string> graph;

void bfs() {
	int x, y, nx, ny;
	bool visit[100][100] = { false };
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };
	queue<pair<int, int> > q;

	moveCnt[0][0] = 1;
	visit[0][0] = true;
	q.push(make_pair(0, 0));
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M || graph[nx][ny] == '0' || visit[nx][ny])
				continue;
			q.push(make_pair(nx, ny));
			visit[nx][ny] = true;
			moveCnt[nx][ny] = moveCnt[x][y] + 1;
		}
	}
}

int main() {
	string s;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> s;
		graph.push_back(s);
	}
	bfs();
	cout << moveCnt[N - 1][M - 1] << '\n';
}
