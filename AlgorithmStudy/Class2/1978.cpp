#include <iostream>
using namespace std;

bool is_prime(int n) {
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
	if (!(n % 2 && n % 3))
		return false;
	int i = 5;
	while (i * i <= n) {
		if (!(n % i && n % (i + 2)))
			return false;
		i += 6;
	}
	return true;
}

int main() {
	int T, num, cnt = 0;

	cin >> T;
	while (T--) {
		cin >> num;
		if (is_prime(num))
			cnt++;
	}
	cout << cnt << '\n';
}
