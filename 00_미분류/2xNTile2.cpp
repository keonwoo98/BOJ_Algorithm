#include <iostream>
using namespace std;

int main(void)
{
	int num, n1, n2, fibo;

	cin >> num;
	if (!num)
		cout << "0" << endl;
	else if (num == 1)
		cout << "1" << endl;
	else if (num == 2)
		cout << "3" << endl;
	else
	{
		n1 = 1;
		n2 = 3;
		for (int i = 2; i < num; i++)
		{
			fibo = (2 * n1 + n2) % 10007;
			n1 = n2;
			n2 = fibo;
		}
		cout << fibo << endl;
	}
}
