#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num;
	string cmd;
	queue<int> q;

	cin >> N;
	while (N--)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			cin >> num;
			q.push(num);
		}
		else if (cmd == "pop")
		{
			if (q.empty())
				cout << "-1" << '\n';
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (cmd == "size")
		{
			if (q.empty())
				cout << '0' << '\n';
			else
				cout << q.size() << '\n';
		}
		else if (cmd == "empty")
			cout << q.empty() << '\n';
		else if (cmd == "front")
		{
			if (q.empty())
				cout << "-1" << '\n';
			else
				cout << q.front() << '\n';
		}
		else if (cmd == "back")
		{
			if (q.empty())
				cout << "-1" << '\n';
			else
				cout << q.back() << '\n';
		}
	}
}
