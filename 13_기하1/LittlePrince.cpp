#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int T, P, x1, x2, y1, y2, c1, c2, r, cnt;

	cin >> T;
	while (T--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> P;
		cnt = 0;
		while (P--)
		{
			cin >> c1 >> c2 >> r;
			if ((pow((x1 - c1), 2) + pow((y1 - c2), 2) < pow(r, 2)) &&
				(pow((x2 - c1), 2) + pow((y2 - c2), 2) > pow(r, 2)))
				cnt++;
			else if ((pow((x1 - c1), 2) + pow((y1 - c2), 2) > pow(r, 2)) &&
				(pow((x2 - c1), 2) + pow((y2 - c2), 2) < pow(r, 2)))
				cnt++;
		}
		cout << cnt << endl;
	}
}
