#include <iostream>
using namespace std;

int main() {
	int T, N;
	long long arr[101];

	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 2;
	for (int i = 6; i < 101; i++)
		arr[i] = arr[i - 2] + arr[i - 3];
	cin >> T;
	while (T--) {
		cin >> N;
		cout << arr[N] << '\n';
	}
}
