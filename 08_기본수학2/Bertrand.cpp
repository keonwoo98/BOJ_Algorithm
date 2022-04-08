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
	int num;
	int cnt;

	num = -1;
	while (1)
	{
		cnt = 0;
		cin >> num;
		if (!num)
			break ;
		for (int i = num + 1; i <= 2 * num; i++)
		{
			if (is_prime(i))
				cnt++;
		}
		cout << cnt << "\n";
	}
}
