#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, x;
	priority_queue<int, vector<int>, less<int> > pq;

	cin >> N;
	while (N--) {
		cin >> x;
		if (x)
			pq.push(x);
		else {
			if (pq.empty())
				cout << "0\n";
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
	}
}
