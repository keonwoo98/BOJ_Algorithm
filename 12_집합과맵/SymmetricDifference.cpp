#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M, num, cnt;
	set<int> s;

	cin >> N >> M;
	while (N--)
	{
		cin >> num;
		s.insert(num);
	}
	cnt = 0;
	while (M--)
	{
		cin >> num;
		if (s.find(num) != s.end())
			cnt++;
		s.insert(num);
	}
	cout << s.size() - cnt << '\n';
}
