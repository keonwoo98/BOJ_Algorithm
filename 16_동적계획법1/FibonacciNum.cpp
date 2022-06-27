#include <iostream>
using namespace std;

int Fibo_recur(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return (Fibo_recur(n - 1) + Fibo_recur(n - 2));
}

int Fibo_loop(int n)
{
	int i, cnt;
	int fibo[n];

	cnt = 0;
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;
	for (i = 3; i <= n; i++)
	{
		cnt++;
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	return cnt;
}

int main(void)
{
	int n;

	cin >> n;
	cout << Fibo_recur(n) <<  " " << Fibo_loop(n) << '\n';
}
