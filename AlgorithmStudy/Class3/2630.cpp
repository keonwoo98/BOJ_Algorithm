#include <iostream>
using namespace std;

int N, b = 0, w = 0;
int arr[128][128];

void divideConquer(int x, int y, int n) {
	int c = arr[x][y];

	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (c != arr[i][j]) {
				divideConquer(x, y, n / 2);
				divideConquer(x + n / 2, y, n / 2);
				divideConquer(x, y + n / 2, n / 2);
				divideConquer(x + n / 2, y + n / 2, n / 2);
				return;
			}
		}
	}
	if (c)
		b++;
	else
		w++;
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
	divideConquer(0, 0, N);
	cout << w << '\n' << b << '\n';
}
