#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	string str;
	stack<int> s;

	while (1)
	{
		getline(cin, str);
		if (str == ".")
			break ;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(')
				s.push(1);
			else if (str[i] == '[')
				s.push(2);
			else if (s.empty() && (str[i] == ')' || str[i] == ']'))
			{
				s.push(-1);
				break ;
			}
			else if (str[i] == ')')
			{
				if (s.top() == 1)
					s.pop();
				else
					break ;
			}
			else if (str[i] == ']')
			{
				if (s.top() == 2)
					s.pop();
				else
					break ;
			}
		}
		if (s.empty())
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
		while(!s.empty())
			s.pop();
	}
}
