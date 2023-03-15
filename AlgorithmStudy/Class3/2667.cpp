#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
using namespace std;

int N;
vector<string> graph;
multiset<int> st;
bool visit[25][25] = { false };
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void bfs(int x, int y) {
	int nx, ny, cnt = 1;
	queue<pair<int, int> > q;

	q.push(make_pair(x, y));
	visit[x][y] = true;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx < 0 || nx >= N || ny < 0 || ny >= N || graph[nx][ny] == '0' || visit[nx][ny])
				continue;
			q.push(make_pair(nx, ny));
			visit[nx][ny] = true;
			cnt++;
		}
	}
	st.insert(cnt);
}

int main() {
	string s;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		graph.push_back(s);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visit[i][j] && graph[i][j] == '1')
				bfs(i, j);
		}
	}
	cout << st.size() << '\n';
	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
		cout << *it << '\n';
}
