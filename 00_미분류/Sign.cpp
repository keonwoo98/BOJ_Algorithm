#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
	int N, overflow;
	long long num, sum;

	for (int t = 0; t < 3; t++)
	{
		cin >> N;
		overflow = 0;
		sum = 0;
		while (N--)
		{
			cin >> num;
			if (num > 0 && sum > 0 && num > LLONG_MAX - sum)
				overflow++;
			if (num < 0 && sum < 0 && num < LLONG_MIN - sum)
				overflow--;
			sum += num;
		}
		if (overflow > 0)
			cout << "+\n";
		else if (overflow < 0)
			cout << "-\n";
		else if (sum == 0)
			cout << "0\n";
		else if (sum > 0)
			cout << "+\n";
		else if (sum < 0)
			cout << "-\n";
	}
}
