#include <iostream>
using namespace std;

int main(void)
{
	int N, M, wid, hei;
	char c;

	cin >> N >> M;
	int arr[N][M];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> c;
			if (c == 'X')
				arr[i][j] = 1;
			else if (c == '.')
				arr[i][j] = 0;
		}
	}
	wid = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (arr[i][j])
				break ;
			if (j + 1 == M)
				wid++;
		}
	}
	hei = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[j][i])
				break ;
			if (j + 1 == N)
				hei++;
		}
	}
	cout << (wid > hei ? wid : hei) << '\n';
}
