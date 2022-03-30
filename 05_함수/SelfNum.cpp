#include <iostream>
using namespace std;

int self_num(int num)
{
	int sum, temp;

	sum = num;
	temp = num;
	while (temp > 0)
	{
		sum += temp % 10;
		temp /= 10;
	}
	return (sum);
}

int main(void)
{
	int arr[11000] = { 0 };

	for (int i = 1; i <= 10000; i++)
		arr[self_num(i) - 1] += 1;
	for (int i = 0; i < 10000; i++)
	{
		if (!arr[i])
			cout << i + 1 << endl;
	}
}

