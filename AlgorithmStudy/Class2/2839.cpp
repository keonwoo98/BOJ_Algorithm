#include <iostream>
using namespace std;

int main() {
	int N, div, rem;

	cin >> N;
	div = N / 5;
	rem = N % 5;
	while (div > 0 && rem % 3) {
		rem += 5;
		div--;
	}
	if (rem % 3)
		cout << "-1\n";
	else
		cout << div + rem / 3 << '\n';
}
