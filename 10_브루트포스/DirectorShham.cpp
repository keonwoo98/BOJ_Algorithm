#include <iostream>
using namespace std;

int is_666(int i)
{
	int cnt, cpy;

	cnt = 0;
	cpy = i;
	while (i)
	{
		if (i % 10 == 6)
		{
			cnt++;
			if (cnt == 3)
				return 1;
		}
		else
			cnt = 0;
		i /= 10;
	}
	return 0;
}

int main(void)
{
	int N, i, cnt;

	cin >> N;
	cnt = 1;
	if (N == 1)
	{
		cout << "666" << endl;
		return 0;
	}
	i = 1666;
	while (1)
	{
		if (is_666(i))
			cnt++;
		if (cnt == N)
		{
			cout << i << endl;
			break ;
		}
		i++;
	}
}
