#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, a, ans = 0;
	int dp[1001];
	vector<int> v;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v.push_back(a);
		int dpMax = 0;
		for (int j = 0; j < i; j++) {
			if (v[i] > v[j]) {
				if (dpMax < dp[j]) {
					dpMax = dp[j];
				}
			}
		}
		dp[i] = dpMax + 1;
		ans = max(ans, dp[i]);
	}
	cout << ans << '\n';
}
