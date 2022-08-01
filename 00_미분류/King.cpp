#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int N, col, row, col2, row2;
	string K, S, move;
	int board[8][8] = { 0, };

	cin >> K >> S >> N;
	board[K[1] - '1'][K[0] - 'A'] = 1;
	board[S[1] - '1'][S[0] - 'A'] = 2;
	col = K[1] - '1';
	row = K[0] - 'A';
	while (N--)
	{
		cin >> move;
		if (move == "R")
		{
			if (row < 7)
			{
				if (board[col][row + 1] == 2 && row == 6)
					continue ;
				if (board[col][row + 1] == 2 && row < 6)
				{
					board[col][row + 1] = 0;
					board[col][row + 2] = 2;
				}
				board[col][row] = 0;
				board[col][row + 1] = 1;
				row++;
			}
		}
		else if (move == "L")
		{
			if (row > 0)
			{
				if (board[col][row - 1] == 2 && row == 1)
					continue ;
				if (board[col][row - 1] == 2 && row > 1)
				{
					board[col][row - 1] = 0;
					board[col][row - 2] = 2;
				}
				board[col][row] = 0;
				board[col][row - 1] = 1;
				row--;
			}
		}
		else if (move == "B")
		{
			if (col > 0)
			{
				if (board[col - 1][row] == 2 && col == 1)
					continue ;
				if (board[col - 1][row] == 2 && col > 1)
				{
					board[col - 1][row] = 0;
					board[col - 2][row] = 2;
				}
				board[col][row] = 0;
				board[col - 1][row] = 1;
				col--;
			}
		}
		else if (move == "T")
		{
			if (col < 7)
			{
				if (board[col + 1][row] == 2 && col == 6)
					continue ;
				if (board[col + 1][row] == 2 && col < 6)
				{
					board[col + 1][row] = 0;
					board[col + 2][row] = 2;
				}
				board[col][row] = 0;
				board[col + 1][row] = 1;
				col++;
			}
		}
		else if (move == "RT")
		{
			if (row < 7 && col < 7)
			{
				if (board[col + 1][row + 1] == 2 && row == 6 && col == 6)
					continue ;
				if (board[col + 1][row + 1] == 2 && row < 6 && col < 6)
				{
					board[col + 1][row + 1] = 0;
					board[col + 2][row + 2] = 2;
				}
				board[col][row] = 0;
				board[col + 1][row + 1] = 1;
				col++;
			}
		}
		else if (move == "LT")
		{
			if (row > 0 && col < 7)
			{
				if (board[col + 1][row - 1] == 2 && row == 1 && col == 6)
					continue ;
				if (board[col + 1][row - 1] == 2 && row > 1 && col < 6)
				{
					board[col + 1][row - 1] = 0;
					board[col + 2][row - 2] = 2;
				}
				board[col][row] = 0;
				board[col + 1][row - 1] = 1;
				col++;
				row--;
			}
		}
		else if (move == "RB")
		{
			if (row < 7 && col > 0)
			{
				if (board[col - 1][row + 1] == 2 && row == 6 && col == 1)
					continue ;
				if (board[col - 1][row + 1] == 2 && row < 6 && col > 1)
				{
					board[col - 1][row + 1] = 0;
					board[col - 2][row + 2] = 2;
				}
				board[col][row] = 0;
				board[col - 1][row + 1] = 1;
				col--;
				row++;
			}
		}
		else if (move == "LB")
		{
			if (row > 0 && col > 0)
			{
				if (board[col - 1][row - 1] == 2 && row == 1 && col == 1)
					continue ;
				if (board[col - 1][row - 1] == 2 && row > 1 && col > 1)
				{
					board[col - 1][row - 1] = 0;
					board[col - 2][row - 2] = 2;
				}
				board[col][row] = 0;
				board[col - 1][row - 1] = 1;
				col--;
				row--;
			}
		}
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (board[i][j] == 1)
			{
				col = i;
				row = j;
			}
			else if (board[i][j] == 2)
			{
				col2 = i;
				row2 = j;
			}
		}
	}
	cout << char(row + 'A') << col + 1 << '\n';
	cout << char(row2 + 'A') << col2 + 1 << '\n';
}
