#include <iostream>
#include <string>
using namespace std;

int main (void)
{
	int cnt;
	string board[8];

	cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> board[i];
		if (i % 2)
		{
			for (int j = 0; j < 8; j++)
			{
				if (j % 2 && board[i][j] == 'F')
					cnt++;
			}
		}
		else
		{
			for (int j = 0; j < 8; j++)
			{
				if (!(j % 2) && board[i][j] == 'F')
					cnt++;
			}
		}
	}
	cout << cnt << '\n';
}
