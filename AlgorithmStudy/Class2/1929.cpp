#include <iostream>
using namespace std;

bool is_prime(int n) {
	if (n <= 1)
		return false;
	else if (n <= 3)
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
	int M, N;

	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		if (is_prime(i))
			cout << i << '\n';
	}
}
