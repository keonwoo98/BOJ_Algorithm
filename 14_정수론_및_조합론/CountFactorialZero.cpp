#include <iostream>
using namespace std;

int main(void)
{
	int n, cnt, res;

	cin >> n;
	res = 1;
	cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		res *= i;
		while (res % 10 == 0)
		{
			res /= 10;
			cnt++;
		}
		res %= 1000;
	}
	cout << cnt << '\n';
}
