#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int fibonacci(int n) {
	if (n < v.size())
		return v[n];
	else {
		int fib = fibonacci(n - 1) + fibonacci(n - 2);
		v.push_back(fib);
		return fib;
	}
}

int main() {
	int T, N;

	v.push_back(0);
	v.push_back(1);
	cin >> T;
	while (T--) {
		cin >> N;
		if (!N)
			cout << "1 0\n";
		else
			cout << fibonacci(N - 1) << ' ' << fibonacci(N) << '\n';
	}
}
