#include <iostream>
using namespace std;

int main(void)
{
	int N, M, cnt;
	unsigned long long comb[1000][1000];

	cin >> N >> M;
	if (M > N - M)
		M = N - M;
	comb[0][0] = 1;
	for (int i = 1; i <= N; i++)
	{
		comb[i][0] = 1;
		for (int j = 1; j <= i; j++)
		{
			if (i == j)
				comb[i][j] = 1;
			else
				comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]) % 10000;
		}
	}
	cnt = 0;
	cout << comb[N][M] << '\n';
}
