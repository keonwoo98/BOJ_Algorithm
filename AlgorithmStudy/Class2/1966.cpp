#include <iostream>
#include <queue>
using namespace std;

int main () {
	int T, M, N, num, cnt, idx, val;
	queue<pair<int, int> > q;
	priority_queue<int> pq;

	cin >> T;
	while (T--) {
		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			cin >> num;
			q.push(make_pair(i, num));
			pq.push(num);
		}
		cnt = 0;
		while (!q.empty()) {
			idx = q.front().first;
			val = q.front().second;
			q.pop();
			if (val == pq.top()) {
				pq.pop();
				cnt++;
				if (idx == M)
					break;
			} else {
				q.push(make_pair(idx, val));
			}
		}
		cout << cnt << '\n';
		while (!q.empty())
			q.pop();
		while (!pq.empty())
			pq.pop();
	}
}
