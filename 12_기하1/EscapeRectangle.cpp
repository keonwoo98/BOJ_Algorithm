#include <iostream>
using namespace std;

int main(void)
{
	int x, y, w, h;
	int min;

	cin >> x >> y >> w >> h;
	if (w - x > h - y)
		min = h - y;
	else
		min = w - x;
	if (w - x > x && min > x)
		min = x;
	if (h - y > y && min > y)
		min = y;
	cout << min << endl;
}
