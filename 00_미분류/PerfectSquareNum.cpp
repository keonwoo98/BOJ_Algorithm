#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int M, N, min;
	int square[100];
	long sum;

	cin >> M >> N;
	for (int i = 1; i <= 100; i++)
		square[i - 1] = i * i;
	sum = 0;
	min = 0;
	for (int i = M; i <= N; i++)
	{
		if (find(square, square + 100, i) != square + 100)
		{
			sum += i;
			if (!min)
				min = i;
		}
	}
	if (sum && min)
		cout << sum << endl << min << endl;
	else
		cout << "-1" << endl;
}
