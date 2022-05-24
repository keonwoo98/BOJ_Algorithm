#include <iostream>
using namespace std;

int is_prime(int num)
{
	int i;

	if (num <= 1)
		return 0;
	if (num <= 3)
		return 1;
	if (!(num % 2 && num % 3))
		return 0;
	i = 5;
	while (i * i <= num)
	{
		if (!(num % i && num % (i + 2)))
			return 0;
		i += 6;
	}
	return 1;
}

int main(void)
{
	int n1, n2, c1, c2;
	int gcd, lcm, i;

	cin >> n1 >> n2;
	c1 = n1;
	c2 = n2;
	gcd = 1;
	i = 2;
	while (n1 >= i && n2 >= i)
	{
		while (is_prime(i) && (n1 % i == 0 || n2 % i == 0))
		{
				if (n1 % i == 0 && n2 % i == 0)
				{
					gcd *= i;
					n1 /= i;
					n2 /= i;
				}
				else if (n1 % i == 0)
					n1 /= i;
				else if (n2 % i == 0)
					n2 /= i;
		}
		i++;
	}
	lcm = c1 * c2 / gcd;
	cout << gcd << ' ' << lcm << endl;
}
