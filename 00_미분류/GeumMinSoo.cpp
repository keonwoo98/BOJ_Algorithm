#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int N;
	string num;

	cin >> N;
	for (int i = N; i > 3; i--)
	{
		num = to_string(i);
		for (int j = 0; j < num.length(); j++)
		{
			if (num[j] != '4' && num[j] != '7')
				break ;
			if (j + 1 == num.length())
			{
				cout << i << '\n';
				return 0;
			}
		}
	}
}
