#include <iostream>
using namespace std;

int main(void)
{
	int A, B, curr, cnt;
	int arr[100001] = { 0, };
	bool prime[100001];

	cin >> A >> B;
	fill_n(prime, 100001, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i <= 100000; i++)
	{
		if (prime[i])
		{
			for (int j = i * 2; j <= B; j += i)
			{
				prime[j] = false;
				curr = j;
				while (curr % i == 0)
				{
					curr /= i;
					arr[j]++;
				}
			}
		}
	}
	cnt = 0;
	for (int i = A; i <= B; i++)
	{
		if (prime[arr[i]])
			cnt++;
	}
	cout << cnt << '\n';
}
