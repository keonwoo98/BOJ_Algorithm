#include <iostream>
using namespace std;

int main(void)
{
	int room;
	int left, right;
	int range;
	int i;

	left = 1;
	right = 1;
	range = -1;
	i = 1;
	cin >> room;
	while (1)
	{
		if (left <= room && room <= right)
		{
			cout << i << endl;
			break ;
		}
		right += (i * 6);
		range += 6;
		left = right - range;
		i++;
	}
}
