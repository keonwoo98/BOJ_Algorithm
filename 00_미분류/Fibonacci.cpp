#include <iostream>
using namespace std;

int main(void)
{
	int num, n1, n2, fibo;

	cin >> num;
	if (num == 0)
		cout << "0" << endl;
	else if (num == 1)
		cout << "1" << endl;
	else
	{
		n1 = 0;
		n2 = 1;
		for (int i = 1; i < num; i++)
		{
			fibo = n1 + n2;
			n1 = n2;
			n2 = fibo;
		}
		cout << fibo << endl;
	}
}
