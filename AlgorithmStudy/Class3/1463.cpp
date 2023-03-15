#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int arr[1000001];

	arr[1] = 0;
	cin >> N;
	for (int i = 2; i <= N; i++) {
		arr[i] = arr[i - 1] + 1;
		if (!(i % 3))
			arr[i] = min(arr[i / 3] + 1, arr[i]);
		if (!(i % 2))
			arr[i] = min(arr[i / 2] + 1, arr[i]);
	}
	cout << arr[N] << '\n';
}
