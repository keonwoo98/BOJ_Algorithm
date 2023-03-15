#include <iostream>
#include <queue>
using namespace std;

int N, K;
int visit[100001];
queue<int> q;

void move(int x, int d) {
	if (x < 0 || x > 100000 || visit[x] != -1)
		return ;
	q.push(x);
	visit[x] = d;
}

void bfs() {
	q.push(N);
	visit[N] = 0;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		move(x + 1, visit[x] + 1);
		move(x - 1, visit[x] + 1);
		move(x * 2, visit[x] + 1);
	}
}

int main() {
	cin >> N >> K;
	for (int i = 0; i < 100001; i++)
		visit[i] = -1;
	bfs();
	cout << visit[K] << '\n';
}
