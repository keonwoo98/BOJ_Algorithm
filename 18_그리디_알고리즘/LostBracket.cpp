#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	int n, result, operand;
	string ex;
	vector<int> num;
	vector<char> op;

	cin >> ex;
	for (int i = 0; i < ex.length(); i++)
	{
		n = 0;
		while (ex[i] >= '0' && ex[i] <= '9')
		{
			n *= 10;
			n += ex[i] - '0';
			i++;
		}
		if (n)
			num.push_back(n);
		if (ex[i] == '+' || ex[i] == '-')
			op.push_back(ex[i]);
	}
	result = num[0];
	for (int i = 0; i < op.size(); i++)
	{
		if (op[i] == '+')
			result += num[i + 1];
		else
		{
			i++;
			operand = num[i];
			while (i < op.size() && op[i] == '+')
			{
				operand += num[i + 1];
				i++;
			}
			result -= operand;
			i--;
		}
	}
	cout << result << '\n';
}
