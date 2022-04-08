#include <iostream>
using namespace std;

int is_prime(int num)
{
	int i;

	if (num <= 1)
		return 0;
	if (num <= 3)
		return 1;
	if (!(num % 2 && num % 3))
		return 0;
	i = 5;
	while (i * i <= num)
	{
		if (!(num % i && num % (i + 2)))
			return 0;
		i += 6;
	}
	return 1;
}

int main(void)
{
	int N, cnt;
	int *arr;

	cin >> N;
	arr = new int[N];
	cnt = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		if (is_prime(arr[i]))
			cnt++;
	}
	cout << cnt << endl;
	delete []arr;
}
