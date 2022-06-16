#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	int T;
	string str;
	stack<int> s;

	cin >> T;
	while (T--)
	{
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(')
				s.push(1);
			else if (s.empty() && str[i] == ')')
			{
				s.push(-1);
				break ;
			}
			else if (str[i] == ')')
				s.pop();
		}
		if (s.empty())
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
		while(!s.empty())
			s.pop();
	}
}
