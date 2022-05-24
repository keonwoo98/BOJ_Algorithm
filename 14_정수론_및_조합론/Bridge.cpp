#include <iostream>
using namespace std;

int main(void)
{
	int T, N, M;
	long long comb[31][31];

	cin >> T;
	while (T--)
	{
		cin >> N >> M;
		if (N > M - N)
			N = M - N;
		comb[0][0] = 1;
		for (int i = 1; i <= M; i++)
		{
			comb[i][0] = 1;
			for (int j = 1; j <= i; j++)
			{
				if (i == j)
					comb[i][j] = 1;
				else
					comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]);
			}
		}
		cout << comb[M][N] << '\n';
	}
}
