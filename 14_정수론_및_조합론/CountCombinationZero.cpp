#include <iostream>
using namespace std;

long long func(long long n, int x)
{
	long long num;

	num = 0;
	for (long long i = x; n / i >= 1; i *= x)
		num += n / i;
	return num;
}

int main(void)
{
	long long n, m;
	long long two, five;

	cin >> n >> m;
	two = func(n, 2) - func(m, 2) - func(n - m, 2);
	five = func(n, 5) - func(m, 5) - func(n - m, 5);
	cout << (two > five ? five : two) << '\n';
}
