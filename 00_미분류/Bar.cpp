#include <iostream>
using namespace std;

int main(void)
{
	int num, cnt;
	int bar[7];

	num = 1;
	for (int i = 0; i < 7; i++)
	{
		bar[i] = num;
		num *= 2;
	}
	cin >> num;
	cnt = 0;
	while (num != 0)
	{
		for (int i = 6; i >= 0; i--)
		{
			if (num >= bar[i])
			{
				num -= bar[i];
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
}
