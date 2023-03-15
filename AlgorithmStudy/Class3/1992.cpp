#include <iostream>
#include <string>
using namespace std;

int N;
string arr[64];
string s = "";

void divideConquer(int x, int y, int n) {
	char c = arr[x][y];
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (c != arr[i][j]) {
				s += "(";
				divideConquer(x, y, n / 2);
				divideConquer(x, y + n / 2, n / 2);
				divideConquer(x + n / 2, y, n / 2);
				divideConquer(x + n / 2, y + n / 2, n / 2);
				s+= ")";
				return ;
			}
		}
	}
	if (c == '1')
		s += "1";
	else
		s += "0";
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	divideConquer(0, 0, N);
	cout << s << '\n';
}
