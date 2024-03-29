#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T, n, s;
	int sticker[2][100001];

	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++)
				cin >> sticker[i][j];
		}
		int dp[2][100001];
		dp[0][0] = sticker[0][0];
		dp[1][0] = sticker[1][0];
		for (int i = 1; i < n; i++) {
			dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + sticker[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + sticker[1][i];
		}
		cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';
	}
}
