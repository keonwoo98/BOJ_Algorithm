#include <iostream>
using namespace std;

int Comb(int n) {
	int ret = 1;

	while (n) {
		ret *= n;
		n--;
	}
	return ret;
}

int main() {
	int N, K;

	cin >> N >> K;
	cout << Comb(N) / (Comb(K) * Comb(N - K)) << '\n';
}
