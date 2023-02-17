#include <iostream>
#include <cmath>
using namespace std;

int n, r, c;
int visit = 0;

void Z(int x, int y, int n) {
	if (x == c && y == r) {
		cout << visit << '\n';
		return;
	}
	if (c >= x && c < x + n && r >= y && r < y + n) {
		Z(x, y, n / 2);
		Z(x + n / 2, y, n / 2);
		Z(x, y + n / 2, n / 2);
		Z(x + n / 2, y + n / 2, n / 2);
	}
	else
		visit += n * n;
}

int main() {
	cin >> n >> r >> c;
	Z(0, 0, pow(2, n));
}
