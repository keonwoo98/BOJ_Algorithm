#include <iostream>
using namespace std;

int main() {
	int h, m;

	cin >> h >> m;
	if (m > 44)
		m -= 45;
	else {
		m = 60 - (45 - m);
		if (h)
			h--;
		else
			h = 23;
	}
	cout << h << ' ' << m << '\n';
}
