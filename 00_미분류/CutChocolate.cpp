#include <iostream>
using namespace std;

int main(void)
{
	int N, M, min, max;

	cin >> N >> M;
	if (N > M)
	{
		min = M;
		max = N;
	}
	else
	{
		min = N;
		max = M;
	}
	cout << (max - 1) + ((min - 1) * max) << '\n';
}
