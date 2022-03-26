#include <iostream>
using namespace std;

int main(void)
{
	int n1, n2, n3;
	int money;

	cin >> n1 >> n2 >> n3;
	if (n1 == n2 && n2 == n3 && n1 == n3)
		money = 10000 + n1 * 1000;
	else if (n1 == n2)
		money = 1000 + n1 * 100;
	else if (n2 == n3)
		money = 1000 + n2 * 100;
	else if (n3 == n1)
		money = 1000 + n3 * 100;
	else
	{
		if (n1 > n2)
		{
			if (n1 > n3)
				money = n1 * 100;
			else
				money = n3 * 100;
		}
		else
		{
			if (n2 > n3)
				money = n2 * 100;
			else
				money = n3 * 100;
		}
	}
	cout << money << endl;

	// int a, b, c;
	// scanf("%d %d %d", &a, &b, &c);
	// printf("%d\n",  a == b && a == c ? 10000 + a * 1000 :
	// 				a == b || a == c ? 1000 + a * 100 :
	// 				b == c ? 1000 + b * 100 :
	// 				a > b ? a * 100 :
	// 				b > c ? b * 100 :
	// 				c * 100);
}
