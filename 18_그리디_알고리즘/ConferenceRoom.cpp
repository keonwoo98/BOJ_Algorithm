#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, start, end, cnt, time;
	vector< pair<int, int> >v;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> start >> end;
		v.push_back(pair<int, int>(end, start));
	}
	sort(v.begin(), v.end());
	cnt = 1;
	time = v[0].first;
	for (int i = 1; i < N; i++)
	{
		if (time <= v[i].second)
		{
			time = v[i].first;
			cnt++;
		}
	}
	cout << cnt << '\n';
}
