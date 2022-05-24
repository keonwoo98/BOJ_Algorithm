#include <iostream>
using namespace std;

int main(void)
{
	int cnt, tmp, max1, max2, min1, min2;
	int dis[6];

	max1 = max2 = min1 = min2 = 0;
	cin >> cnt;
	for (int i = 0; i < 6; i++)
	{
		cin >> tmp;
		cin >> dis[i];
	}
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
		{
			if (max1 < dis[i])
				max1 = dis[i];
		}
		else
		{
			if (max2 < dis[i])
				max2 = dis[i];
		}
	}
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
		{
			if (max2 == dis[(i + 5) % 6] + dis[(i + 1) % 6])
				min1 = dis[i];
		}
		else
		{
			if (max1 == dis[(i + 5) % 6] + dis[(i + 1) % 6])
				min2 = dis[i];
		}
	}
	cout << cnt * ((max1 * max2) - (min1 * min2)) << endl;
}
