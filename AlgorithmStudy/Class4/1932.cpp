#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int arr[501][501] = { 0 };
	int dp[501][501] = { 0 };

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++)
			cin >> arr[i][j];
	}
	dp[0][0] = arr[0][0];
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0)
				dp[i][j] = dp[i - 1][j] + arr[i][j];
			else if (j == i)
				dp[i][j] = dp[i - 1][j - 1] + arr[i][j];
			else
				dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
		}
	}
	int max = dp[0][0];
	for (int i = 0; i < n; i++)
		max = max < dp[n - 1][i] ? dp[n - 1][i] : max;
	cout << max << '\n';
}