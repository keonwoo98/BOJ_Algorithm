#include <iostream>
#include <cstring>
using namespace std;

int square[128][128];
int white, blue;

void divide_conquer(int x, int y, int N)
{
	int cnt;

	cnt = 0;
	for (int i = x; i < x + N; i++)
	{
		for (int j = y; j < y + N; j++)
		{
			if (square[i][j])
				cnt++;
		}
	}
	if (!cnt)
		white++;
	else if (cnt == N * N)
		blue++;
	else
	{
		divide_conquer(x, y, N / 2);
		divide_conquer(x + N / 2, y, N / 2);
		divide_conquer(x, y + N / 2, N / 2);
		divide_conquer(x + N / 2, y + N / 2, N / 2);
	}
}

int main(void)
{
	int N;

	memset(square, 0, sizeof(square));
	white = blue = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cin >> square[i][j];
	}
	divide_conquer(0, 0, N);
	cout << white << '\n' << blue << '\n';
}
