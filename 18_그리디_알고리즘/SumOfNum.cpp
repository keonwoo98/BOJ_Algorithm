#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	long long S, sum;

	cin >> S;
	sum = 0;
	N = 1;
	while (1)
	{
		if (sum + N <= S)
		{
			sum += N;
			N++;
		}
		else if (sum + N >= S)
		{
			cout << N - 1 << '\n';
			break ;
		}
	}
}
