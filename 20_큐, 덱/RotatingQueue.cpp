#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	int N, M, num, cnt, l, r;
	deque<int> dq;

	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		dq.push_back(i);
	cnt = 0;
	while (M--)
	{
		cin >> num;
		for (int i = 0; i < dq.size(); i++)
		{
			if (num == dq[i])
			{
				l = i;
				r = dq.size() - i;
				break ;
			}
		}
		if (l <= r)
		{
			while (1)
			{
				if (num == dq.front())
					break ;
				cnt++;
				dq.push_back(dq.front());
				dq.pop_front();
			}
			dq.pop_front();
		}
		else
		{
			cnt++;
			while (1)
			{
				if (num == dq.back())
					break ;
				cnt++;
				dq.push_front(dq.back());
				dq.pop_back();
			}
			dq.pop_back();
		}
	}
	cout << cnt << '\n';
}
