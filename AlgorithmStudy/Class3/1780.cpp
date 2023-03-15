#include <iostream>
using namespace std;

int N;
int p1 = 0, p2 = 0, p3 = 0;
int **arr;

void div3(int x, int y, int n) {
	int num = arr[x][y];
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (num != arr[i][j]) {
				div3(x, y, n / 3);
				div3(x + n / 3, y, n / 3);
				div3(x + n / 3 * 2, y, n / 3);
				div3(x, y + n / 3, n / 3);
				div3(x + n / 3, y + n / 3, n / 3);
				div3(x + n / 3 * 2, y + n / 3, n / 3);
				div3(x, y + n / 3 * 2, n / 3);
				div3(x + n / 3, y + n / 3 * 2, n / 3);
				div3(x + n / 3 * 2, y + n / 3 * 2, n / 3);
				return ;
			}
		}
	}
	if (num == -1)
		p1++;
	else if (num == 0)
		p2++;
	else if (num == 1)
		p3++;
}

int main() {
	cin >> N;
	arr = new int*[N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[N];
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
	}
	div3(0, 0, N);
	for (int i = 0; i < N; i++)
		delete arr[i];
	delete arr;
	cout << p1 << '\n' << p2 << '\n' << p3 << '\n';
}
