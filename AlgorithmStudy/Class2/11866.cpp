#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N, K, num;
	queue<int> q;

	cin >> N >> K;
	for (int i = 1; i <= N; i++) q.push(i);
	cout << '<';
	while (!q.empty()) {
		for (int i = 0; i < K; i++) {
			num = q.front();
			q.pop();
			if (i != K - 1) q.push(num);
		}
		if (q.empty())
			cout << num << ">";
		else
			cout << num << ", ";
	}
	cout << '\n';
}
