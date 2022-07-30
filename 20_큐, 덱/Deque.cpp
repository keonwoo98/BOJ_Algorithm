#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(void)
{
	int N, num;
	string s;
	deque<int> d;

	cin >> N;
	while (N--)
	{
		cin >> s;
		if (s == "push_front")
		{
			cin >> num;
			d.push_front(num);
		}
		else if (s == "push_back")
		{
			cin >> num;
			d.push_back(num);
		}
		else if (s == "pop_front")
		{
			if (!d.empty())
			{
				num = d.front();
				cout << num << '\n';
				d.pop_front();
			}
			else
				cout << "-1" << '\n';
		}
		else if (s == "pop_back")
		{
			if (!d.empty())
			{
				num = d.back();
				cout << num << '\n';
				d.pop_back();
			}
			else
				cout << "-1" << '\n';
		}
		else if (s == "size")
		{
			cout << d.size() << '\n';
		}
		else if (s == "empty")
		{
			if (d.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (s == "front")
		{
			if (!d.empty())
			{
				num = d.front();
				cout << num << '\n';
			}
			else
				cout << "-1" << '\n';
		}
		else if (s == "back")
		{
			if (!d.empty())
			{
				num = d.back();
				cout << num << '\n';
			}
			else
				cout << "-1" << '\n';
		}
	}
}
