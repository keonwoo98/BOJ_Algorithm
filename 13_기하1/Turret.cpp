#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int Tcase;
	int x1, x2, y1, y2, r1, r2;
	long long dx, dy, dist, sum, sub;

	cin >> Tcase;
	while (Tcase--)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		dx = pow(x1 - x2, 2);
		dy = pow(y1 - y2, 2);
		dist = dx + dy;
		if (r1 > r2)
			swap(r1, r2);
		sum = pow(r1 + r2, 2);
		sub = pow(r2 - r1, 2);
		if (sub < dist && dist < sum)
			cout << "2" << endl;
		else if (dist == sum || (dist == sub && dist))
			cout << "1" << endl;
		else if (dist < sub || dist > sum)
			cout << "0" << endl;
		else if (!dist && r1 == r2)
			cout << "-1" << endl;
	}
}
