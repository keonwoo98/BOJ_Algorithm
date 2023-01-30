#include <iostream>
using namespace std;

bool is_sss(int n) {
	int cnt = 0;
	while (n > 0) {
		if (n % 10 == 6)
			cnt++;
		else
			cnt = 0;
		if (cnt == 3)
			return true;
		n /= 10;
	}
	return false;
}

int main() {
	int n;

	cin >> n;
	if (n == 1)
		cout << "666\n";
	else {
		int cnt = 2;
		int num = 1666;
		while (1) {
			if (n == cnt) {
				cout << num << '\n';
				break;
			}
			num++;
			while (!is_sss(num))
				num++;
			cnt++;
		}
	}
}
