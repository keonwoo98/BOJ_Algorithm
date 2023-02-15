#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M, tree;
	vector<int> v;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> tree;
		v.push_back(tree);
	}
	int lo = 0;
	int hi = *max_element(v.begin(),v.end());;
	int mid;
	int ans = 0;
	long long g;
	while (lo <= hi) {
		g = 0;
		mid = (lo + hi) / 2;
		for (int i = 0; i < N; i++) {
			if (mid <= v[i])
				g += v[i] - mid;
		}
		if (g < M) {
			hi = mid - 1;
			cout << g << ' ' << M << '\n';
		}
		else {
			ans = mid;
			lo = mid + 1;
		}
	}
	cout << ans << '\n';
}
