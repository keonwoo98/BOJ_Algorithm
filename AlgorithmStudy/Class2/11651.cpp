#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second == p2.second)
		return p1.first < p2.first;
	return p1.second < p2.second;
}

int main() {
	int N, x, y;
	vector<pair<int, int> > v;

	cin >> N;
	while (N--) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), comp);
	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << ' ' << v[i].second << '\n';
}
