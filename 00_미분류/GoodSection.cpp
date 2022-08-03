#include <iostream>
#include <set>
using namespace std;

int main(void)
{
	int S, num, start, end, cnt, l, r;
	set<int> s;

	cin >> S;
	while (S--)
	{
		cin >> num;
		s.insert(num);
	}
	cin >> num;
	if (s.find(num) != s.end())
	{
		cout << "0" << '\n';
		return 0;
	}
	set<int>::iterator iter = s.begin();
	while (iter != s.end())
	{
		if (*iter < num)
			iter++;
		else
		{
			if (iter == s.begin())
			{
				start = 0;
				end = *iter;
				break ;
			}
			end = *iter;
			start = *(--iter);
			break ;
		}
	}
	cnt = 0;
	l = start + 1;
	r = l + 1;
	while (r < end)
	{
		if (num >= l && num <= r)
			cnt++;
		if (r + 1 < end)
			r++;
		else
		{
			l++;
			r = l + 1;
		}
	}
	cout << cnt << '\n';
}
