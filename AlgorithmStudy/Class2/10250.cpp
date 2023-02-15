#include <iostream>
using namespace std;

int main() {
	int T, h, w, n;

	cin >> T;
	while (T--) {
		cin >> h >> w >> n;
		int room = 1;
		room += n / h;
		if (n % h)
			room += n % h * 100;
		else
			--room += h * 100;
		cout << room << '\n';
	}
}
