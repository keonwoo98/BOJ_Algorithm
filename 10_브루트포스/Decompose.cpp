#include <iostream>
using namespace std;

int is_ctor(int n)
{
	int sum;

	sum = n;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(void)
{
	int num;

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		if (num == is_ctor(i))
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << "0" << endl;
}
