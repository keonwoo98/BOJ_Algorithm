#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, num, cnt;
	vector<pair <int, int> > sorted, origin;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		sorted.push_back(pair<int, int>(num, i));
	}
	sort(sorted.begin(), sorted.end());
	origin.push_back(pair<int, int>(sorted[0].second, 0));
	cnt = 0;
	for (int i = 1; i < N; i++)
	{
		if (sorted[i - 1].first == sorted[i].first)
			origin.push_back(pair<int, int>(sorted[i].second, cnt));
		else
			origin.push_back(pair<int, int>(sorted[i].second, ++cnt));
	}
	sort(origin.begin(), origin.end());
	for (int i = 0; i < N; i++)
		cout << origin[i].second << ' ';
	cout << '\n';
}
