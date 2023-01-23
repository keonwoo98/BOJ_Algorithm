#include <iostream>
using namespace std;

int main() {
	int n, x, sum = 0, max = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (max < x)
			max = x;
		sum += x;
	}
	cout << fixed;
	cout.precision(6);
	cout << (double)sum / max * 100 / n << '\n';
}
