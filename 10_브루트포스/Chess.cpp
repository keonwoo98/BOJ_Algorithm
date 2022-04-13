#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int N, M;
	int *paint;
	int index;
	string *board;

	cin >> N >> M;
	board = new string[N];
	for (int i = 0; i < N; i++)
		cin >> board[i];
	paint = new int[(N - 7) * (M - 7) * 2];
	bzero(paint, (N - 7) * (M - 7));
	index = 0;
	for (int i = 0; i < N - 7; i++)
	{
		for (int j = 0; j < M - 7; j++)
		{
			for (int row = i; row < i + 8; row++)
			{
				for (int col = j; col < j + 8; col++)
				{
					if ((row + col) % 2)
					{
						if (board[row][col] == 'W')
							paint[index]++;
						else
							paint[index + 1]++;
					}
					else
					{
						if (board[row][col] == 'B')
							paint[index]++;
						else
							paint[index + 1]++;
					}
				}
			}
			index += 2;
		}
	}
	int min = paint[0];
	for (int i = 1; i < index; i++)
	{
		if (min > paint[i])
			min = paint[i];
	}
	cout << min << endl;
}
