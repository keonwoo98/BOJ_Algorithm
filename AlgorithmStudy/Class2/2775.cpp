#include <iostream>
using namespace std;

int apt(int k, int n) {
	if (!k)
		return n;
	if (n == 1)
		return 1;
	return apt(k - 1, n) + apt(k, n - 1);
}

int main() {
	int T, k, n;

	cin >> T;
	while (T--) {
		cin >> k >> n;
		cout << apt(k, n) << '\n';
	}
}
