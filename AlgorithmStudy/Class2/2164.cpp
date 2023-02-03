#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N, num;
	queue<int> q;

	cin >> N;
	for (int i = 1; i <= N; i++)
		q.push(i);
	while (!q.empty()) {
		num = q.front();
		q.pop();
		if (!q.empty()) {
			num = q.front();
			q.pop();	
			q.push(num);
		}
	}
	cout << num << '\n';
}
