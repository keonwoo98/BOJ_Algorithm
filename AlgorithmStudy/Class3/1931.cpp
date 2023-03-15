#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, s, e, cnt = 1;
	vector<pair<int, int> > v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> e;
		v.push_back(make_pair(e, s));
	}
	sort(v.begin(), v.end());
	int time = v[0].first;
	for (int i = 1; i < n; i++) {
		if (time <= v[i].second) {
			cnt++;
			time = v[i].first;
		}
	}
	cout << cnt << '\n';
}
