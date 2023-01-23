#include <iostream>
using namespace std;

int rev(int n) {
	int ret = 0;

	while (n > 0) {
		ret *= 10;
		ret += n % 10;
		n /= 10;
	}
	return ret;
}

int main() {
	int a, b;

	cin >> a >> b;
	a = rev(a);
	b = rev(b);
	cout << (a > b ? a : b) << '\n';
}
