#include <iostream>
using namespace std;

int main() {
	int n, num, min, max;

	cin >> n;
	cin >> num;
	min = max = num;
	while (--n) {
		cin >> num;
		if (min > num)
			min = num;
		if (max < num)
			max = num;
	}
	cout << min << ' ' << max << '\n';
}
