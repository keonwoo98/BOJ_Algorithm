#include <iostream>
#include <vector>
using namespace std;


int main() {
	int n, stairs;
	vector<int> v, dp;

	cin >> stairs;
	v.resize(stairs);
	dp.resize(stairs);
	for (int i = 0; i < stairs; i++)
		cin >> v[i];
	dp[0] = v[0];
	dp[1] = v[0] + v[1];
	dp[2] = max(v[0] + v[2], v[1] + v[2]);
	for (int i = 3; i < stairs; i++)
		dp[i] = max(dp[i - 2] + v[i], dp[i - 3] + v[i - 1] + v[i]);
	cout << dp[stairs - 1] << '\n';
}
