#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, x;
	priority_queue<int, vector<int>, greater<int> > pq;
	priority_queue<int, vector<int>, less<int> > nq;

	cin >> N;
	while (N--) {
		cin >> x;
		if (x > 0)
			pq.push(x);
		else if (x < 0)
			nq.push(x);
		else {
			if (pq.empty() && nq.empty())
				cout << "0\n";
			else if (pq.empty()) {
				cout << nq.top() << '\n';
				nq.pop();
			}
			else if (nq.empty()) {
				cout << pq.top() << '\n';
				pq.pop();
			}
			else {
				if (abs(pq.top()) >= abs(nq.top())) {
					cout << nq.top() << '\n';
					nq.pop();
				}
				else {
					cout << pq.top() << '\n';
					pq.pop();
				}
			}
		}
	}
}
