#include <iostream>
using namespace std;

int main() {
	int N, n, x, i;

	cin >> N;
	if (N == 1) {
		cout << "1\n";
		return 0;
	}
	n = 2;
	x = 5;
	i = 2;
	while (1) {
		if ((n += x) + 1 > N) {
			cout << i << '\n';
			break;
		}
		x += 6;
		i++;
		n++;
	}
}
