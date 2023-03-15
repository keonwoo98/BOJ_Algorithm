#include <iostream>
using namespace std;

int main() {
	int T, M, N, x, y;
	int year, month, day, am, ad;

	cin >> T;
	while (T--) {
		cin >> M >> N >> x >> y;
		if (x > y) {
			am = x - y + 1;
			ad = 1;
		}
		else {
			am = 1;
			ad = y - x + 1;
		}
		month = day = year = 1;
		while (true) {
			if (month == am && day == ad) {
				year += x - am;
				month = x;
				day = y;
				break;
			} else if (M - month < N - day) {
				day += M - month + 1;
				year += M - month + 1;
				month = 1;
			} else if (M - month > N - day) {
				month += N - day + 1;
				year += N - day + 1;
				day = 1;
			} else {
				year += N - day;
				month = M;
				day = N;
				break;
			}
		}
		if (month == x && day == y)
			cout << year << '\n';
		else
			cout << "-1\n";
	}
}
