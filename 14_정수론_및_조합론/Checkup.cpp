#include <iostream>
#include <algorithm>
using namespace std;

int get_gcd(int n1, int n2)
{
	int tmp;

	while (n2)
	{
		tmp = n1 % n2;
		n1 = n2;
		n2 = tmp;
	}
	return n1;
}

int main(void)
{
	int N, M, cnt;
	int arr[500], sol[500];

	cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sort(arr, arr + N);
	M = arr[1] - arr[0];
	for (int i = 2; i < N; i++)
		M = get_gcd(M, arr[i] - arr[i - 1]);
	for (int i = 1; i * i <= M; i++)
	{
		if (M % i == 0)
		{
			sol[cnt++] = i;
			if (i != M / i)
				sol[cnt++] = M / i;
		}
	}
	sort(sol, sol + cnt);
	for (int i = 0; i < cnt; i++)
		if (sol[i] != 1)
			cout << sol[i] << ' ';
	cout << endl;
}
