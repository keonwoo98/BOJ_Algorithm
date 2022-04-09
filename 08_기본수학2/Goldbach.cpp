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
	int Tcase, num;

	cin >> Tcase;
	while (Tcase--)
	{
		cin >> num;
		for (int i = num / 2; i >= 2; i--)
		{
			if (is_prime(i))
			{
				if (is_prime(num - i))
				{
					cout << i << " " << num - i << endl;
					break ;
				}
			}
		}
	}
}