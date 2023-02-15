#include <iostream>
using namespace std;

int gcd(int r1, int r2) {
	if (!r2)
		return r1;
	return (gcd(r2, r1 % r2));
}

int main() {
	int a, b, r;

	cin >> a >> b;
	r = gcd(a, b);
	cout << r << '\n' << a * b / r << '\n';
}
