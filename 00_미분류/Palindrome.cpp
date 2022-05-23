#include <iostream>
using namespace std;

int main(void)
{
	string num;
	int flag;

	while (1)
	{
		flag = 0;
		cin >> num;
		if (num == "0")
			break ;
		for (int i = 0; i < num.length() / 2; i++)
		{
			if (num[i] != num[num.length() - i - 1])
			{
				cout << "no" << endl;
				flag = 1;
				break ;
			}
		}
		if (!flag)
			cout << "yes" << endl;
	}
}
