#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int N;
	int king[2];
	int stone[2];
	string K, S, move;

	cin >> K >> S >> N;
	king[0] = 8 - (K[1] - '0');
	king[1] = K[0] - 'A';
	stone[0] = 8 - (S[1] - '0');
	stone[1] = S[0] - 'A';
	while (N--)
	{
		cin >> move;
		if (move == "R")
		{
			if (king[1] + 1 < 8)
			{
				king[1]++;
				if (king[0] == stone[0] && king[1] == stone[1])
				{
					if (stone[1] + 1 < 8)
						stone[1]++;
					else
						king[1]--;
				}
			}
		}
		else if (move == "L")
		{
			if (king[1] - 1 >= 0)
			{
				king[1]--;
				if (king[0] == stone[0] && king[1] == stone[1])
				{
					if (stone[1] - 1 >= 0)
						stone[1]--;
					else
						king[1]++;
				}
			}
		}
		else if (move == "B")
		{
			if (king[0] + 1 < 8)
			{
				king[0]++;
				if (king[0] == stone[0] && king[1] == stone[1])
				{
					if (stone[0] + 1 < 8)
						stone[0]++;
					else
						king[0]--;
				}
			}
		}
		else if (move == "T")
		{
			if (king[0] - 1 >= 0)
			{
				king[0]--;
				if (king[0] == stone[0] && king[1] == stone[1])
				{
					if (stone[0] - 1 >= 0)
						stone[0]--;
					else
						king[0]++;
				}
			}
		}
		else if (move == "RT")
		{
			if (king[0] - 1 >= 0 && king[1] + 1 < 8)
			{
				king[0]--;
				king[1]++;
				if (king[0] == stone[0] && king[1] == stone[1])
				{
					if (stone[0] - 1 >= 0 && stone[1] + 1 < 8)
					{
						stone[0]--;
						stone[1]++;
					}
					else
					{
						king[0]++;
						king[1]--;
					}
				}
			}
		}
		else if (move == "LT")
		{
			if (king[0] - 1 >= 0 && king[1] - 1 >= 0)
			{
				king[0]--;
				king[1]--;
				if (king[0] == stone[0] && king[1] == stone[1])
				{
					if (stone[0] - 1 >= 0 && stone[1] - 1 >= 0)
					{
						stone[0]--;
						stone[1]--;
					}
					else
					{
						king[0]++;
						king[1]++;
					}
				}
			}
		}
		else if (move == "RB")
		{
			if (king[0] + 1 < 8 && king[1] + 1 < 8)
			{
				king[0]++;
				king[1]++;
				if (king[0] == stone[0] && king[1] == stone[1])
				{
					if (stone[0] + 1 < 8 && stone[1] + 1 < 8)
					{
						stone[0]++;
						stone[1]++;
					}
					else
					{
						king[0]--;
						king[1]--;
					}
				}
			}
		}
		else if (move == "LB")
		{
			if (king[0] + 1 < 8 && king[1] - 1 >= 0)
			{
				king[0]++;
				king[1]--;
				if (king[0] == stone[0] && king[1] == stone[1])
				{
					if (stone[0] + 1 < 8 && stone[1] - 1 >= 0)
					{
						stone[0]++;
						stone[1]--;
					}
					else
					{
						king[0]--;
						king[1]++;
					}
				}
			}
		}
	}
	string str[2];
	char ch = 'A';
	int num;
	for (int i = 0; i < 8; i++)
	{
		if (king[1] == i)
			str[0] += ch;
		ch++;
	}
	num = 8 - king[0];
	str[0] += to_string(num);
	ch = 'A';
	for (int i = 0; i < 8; i++)
	{
		if (stone[1] == i)
			str[1] += ch;
		ch++;
	}
	num = 8 - stone[0];
	str[1] += to_string(num);
	cout << str[0] << '\n' << str[1] << '\n';
}
