#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
	int T;
	vector< pair<int, int> > v;
	vector<int> dis;

	v.reserve(4);
	cin >> T;
	while (T--)
	{
		v.clear();
		dis.clear();
		for (int i = 0; i < 4; i++)
			cin >> v[i].first >> v[i].second;
		for (int i = 0; i < 4; i++)
			for (int j = i + 1; j < 4; j++)
				dis.push_back(pow(v[i].first - v[j].first, 2) + pow(v[i].second - v[j].second, 2));
		sort(dis.begin(), dis.end());
		cout << (dis[0] == dis[1] && dis[1] == dis[2] && dis[2] == dis[3] && dis[4] == dis[5]) << '\n';
	}
}
