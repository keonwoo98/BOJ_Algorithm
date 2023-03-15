#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int N;
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
vector<string> graph;
bool visit[100][100];

void dfs(int x, int y) {
	int nx, ny;

	visit[x][y] = true;
	for (int i = 0; i < 4; i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx < 0 || nx >= N || ny < 0 || ny >= N)
			continue;
		if (!visit[nx][ny] && graph[x][y] == graph[nx][ny])
			dfs(nx, ny);
	}
}

int main() {
	int cnt;
	string s;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		graph.push_back(s);
	}
	cnt = 0;
	memset(visit, false, sizeof(visit));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visit[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << ' ';
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (graph[i][j] == 'R')
				graph[i][j] = 'G';
		}
	}
	cnt = 0;
	memset(visit, false, sizeof(visit));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visit[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
}
