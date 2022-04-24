#include <iostream>
using namespace std;

int main(void)
{
	int N, K;
	long long comb[1001][1001];

	cin >> N >> K;
	if (K > N - K)
		K = N - K;
	comb[0][0] = 1;
	for (int i = 1; i <= N; i++)
	{
		comb[i][0] = 1;
		for (int j = 1; j <= i; j++)
		{
			if (i == j)
				comb[i][j] = 1;
			else
				comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]) % 10007;
		}
	}
	cout << comb[N][K] << '\n';
}
