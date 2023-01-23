#include <iostream>
using namespace std;

int main() {
	int n, index, max = 0;

	for (int i = 0; i < 9; i++) {
		cin >> n;
		if (max < n) {
			max = n;
			index = i + 1;
		}
	}
	cout << max << '\n' << index << '\n';
}