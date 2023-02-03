#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
	return p1.first > p2.first;
}

int main() {
	int N, num, avg = 0;
	vector<int> v;
	vector<pair<int, int> > vp;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
		avg += num;
	}
	avg = round((double)avg / (double)N);
	sort(v.begin(), v.end());
	if (avg == -0)
		avg = 0;
	cout << avg << '\n';
	cout << v[N / 2] << '\n';
	int cnt = 1;
	for (int i = 0; i < N; i++) {
		if (i + 1 != N && v[i] == v[i + 1])
			cnt++;
		else {
			vp.push_back(pair<int, int>(cnt, v[i]));
			cnt = 1;
		}
	}
	sort(vp.begin(), vp.end(), comp);
	if (!vp.size())
		cout << v[0] << '\n';
	else if (vp[0].first == vp[1].first)
		cout << vp[1].second << '\n';
	else
		cout << vp[0].second << '\n';
	cout << v[N - 1] - v[0] << '\n';
}
