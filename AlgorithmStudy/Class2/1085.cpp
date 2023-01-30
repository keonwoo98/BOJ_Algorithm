#include <iostream>
using namespace std;

int main() {
	int x, y, w, h, min;

	cin >> x >> y >> w >> h;
	min = x;
	min = min > w - x ? w - x : min;
	min = min > y ? y : min;
	min = min > h - y ? h - y : min;
	cout << min << '\n';
}
