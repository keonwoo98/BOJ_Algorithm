#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, x, y;
	vector<pair<int, int> > v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	for (int i = 0; i < n; i++) {
		int rank = 1;
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			if (v[i].first < v[j].first && v[i].second < v[j].second)
				rank++;
		}
		cout << rank << ' ';
	}
	cout << '\n';
}
