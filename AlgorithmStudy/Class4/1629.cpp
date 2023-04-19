#include <iostream>
using namespace std;

long long A, B, C, k;

long long power(long long n) {
	if (n == 0) return 1;
	if (n == 1) return A % C;
	k = power(n / 2) % C;
	if (n % 2) return k * k % C * A % C;
	return k * k % C;
}

int main() {
	cin >> A >> B >> C;
	cout << power(B) << '\n';
}
