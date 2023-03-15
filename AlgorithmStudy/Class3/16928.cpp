#include <iostream>
#include <queue>
using namespace std;
bool visit[101] = { false };
int graph[101] = { 0 };

void bfs() {
	queue<pair<int, int> > q;

	q.push(make_pair(1, 0));
	visit[1] = true;
	while (!q.empty()) {
		int p = q.front().first;
		int c = q.front().second;
		q.pop();
		for (int i = 1; i <= 6; i++) {
			int np = p + i;
			if (np == 100) {
				cout << c + 1 << '\n';
				return;
			}
			while (graph[np])
				np = graph[np];
			if (!visit[np]) {
				q.push(make_pair(np, c + 1));
				visit[np] = true;
			}
		}
	}
}

int main() {
	int N, M, x, y, u, v;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		graph[x] = y;
	}
	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		graph[u] = v;
	}
	bfs();
}
