#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	int N, num;
	string cmd;
	stack<int> s;

	cin >> N;
	while (N--)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			cin >> num;
			s.push(num);
		}
		else if (cmd == "pop")
		{
			if (s.size() == 0)
				cout << "-1" << '\n';
			else
			{
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (cmd == "size")
			cout << s.size() << '\n';
		else if (cmd == "empty")
		{
			if (s.size() == 0)
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (cmd == "top")
		{
			if (s.size() == 0)
				cout << "-1" << '\n';
			else
				cout << s.top() << '\n';
		}
	}
}
