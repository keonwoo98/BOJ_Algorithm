#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * factorial(n - 1);
}

int main(void)
{
	int N, K;
	int n1, n2, n3;

	cin >> N >> K;
	n1 = factorial(N);
	n2 = factorial(K);
	n3 = factorial(N - K);
	cout << n1 / (n2 * n3) << '\n';
}
