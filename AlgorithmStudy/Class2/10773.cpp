#include <iostream>
#include <stack>
using namespace std;

int main() {
	int K, n;
	stack<int> s;

	cin >> K;
	while (K--) {
		cin >> n;
		if (n == 0)
			s.pop();
		else
			s.push(n);
	}
	n = 0;
	while (!s.empty()) {
		n += s.top();
		s.pop();
	}
	cout << n << '\n';
}
