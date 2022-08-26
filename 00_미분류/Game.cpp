#include <iostream>
using namespace std;

#define MAX 1000000000

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int left, right, mid, temp;
	long long X, Y, Z;

	cin >> X >> Y;
	Z = 100 * Y / X;
	if (Z >= 99)
	{
		cout << "-1" << '\n';
		return 0;
	}
	left = 0;
	right = MAX;
	while (left <= right)
	{
		mid = (left + right) / 2;
		temp = (Y + mid) * 100 / (X + mid);
		if (Z < temp)
			right = mid - 1;
		else
			left = mid + 1;
	}
	cout << left << '\n';
}
