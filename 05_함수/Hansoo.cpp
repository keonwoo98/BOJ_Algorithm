#include <iostream>
using namespace std;

int is_hansoo(int num)
{
	int arr[3];

	arr[0] = num / 100;
	arr[1] = num / 10 % 10;
	arr[2] = num % 10;
	if (arr[0] - arr[1] == arr[1] - arr[2])
		return (1);
	return (0);
}

int main(void)
{
	int num;
	int hansoo;

	cin >> num;
	if (num < 100)
	{
		cout << num << endl;
		return 0;
	}
	hansoo = 99;
	for (int i = 100; i <= num; i++)
	{
		if (is_hansoo(i))
			hansoo++;
	}
	cout << hansoo << endl;
}
