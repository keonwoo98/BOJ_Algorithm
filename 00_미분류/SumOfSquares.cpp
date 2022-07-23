#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	int dp[1000000];

	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		dp[i] = i;
		for (int j = 1; j * j <= i; j++)
			dp[i] = min(dp[i], dp[i - j * j] + 1);
	}
	cout << dp[N] << '\n';
}
