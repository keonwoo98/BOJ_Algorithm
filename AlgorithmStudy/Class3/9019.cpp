#include <iostream>
#include <queue>
#include <string>
#include <cstring>
using namespace std;

int a, b;
bool visit[10000];

void bfs() {
	queue<pair<int, string> > q;
	q.push(make_pair(a, ""));
	while (!q.empty()) {
		int n = q.front().first;
		string op = q.front().second;
		q.pop();
		if (n == b) {
			cout << op << '\n';
			return;
		}
		int d = (n * 2) % 10000;
		if (!visit[d]) {
			visit[d] = true;
			q.push(make_pair(d, op + "D"));
		}
		int s = n - 1 < 0 ? 9999 : n - 1;
		if (!visit[s]) {
			visit[s] = true;
			q.push(make_pair(s, op + "S"));
		}
		int l = (n % 1000) * 10 + (n / 1000);
		if (!visit[l]) {
			visit[l] = true;
			q.push(make_pair(l, op + "L"));
		}
		int r = (n / 10) + (n % 10) * 1000;
		if (!visit[r]) {
			visit[r] = true;
			q.push(make_pair(r, op + "R"));
		}
	}
}

int main() {
	int T;

	cin >> T;
	while (T--) {
		cin >> a >> b;
		memset(visit, false, sizeof(visit));
		bfs();
	}
}
