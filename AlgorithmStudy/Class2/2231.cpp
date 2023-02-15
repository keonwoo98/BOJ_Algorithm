#include <iostream>
using namespace std;

int main() {
	int N;

	cin >> N;
	for (int i = 0; i <= N; i++) {
		int n1 = i;
		int n2 = i;
		while (n1) {
			n2 += n1 % 10;
			n1 /= 10;
		}
		if (n2 == N) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << "0\n";
}
