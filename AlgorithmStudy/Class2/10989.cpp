#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num;
	int arr[10001] = {0};

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[num]++;
	}
	for (int i = 0; i < 10001; i++) {
		while (arr[i]--) cout << i << '\n';
	}
}
