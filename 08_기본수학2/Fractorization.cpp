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
	int num, temp;

	cin >> num;
	if (num == 1)
		return 0;
	temp = num;
	for (int i = 2; i * i <= num; i++)
	{
		while (is_prime(i))
		{
			if (!(temp % i))
			{
				cout << i << endl;
				temp /= i;
			}
			else
				break ;
		}
	}
	if (temp == num)
		cout << num << endl;
	else if (is_prime(temp))
		cout << temp << endl;
}
