#include <iostream>
using namespace std;

int main(void)
{
	int X, N, price, count;
	long long total;

	cin >> X >> N;
	total = 0;
	while (N--)
	{
		cin >> price >> count;
		total += price * count;
	}
	if (X == total)
		cout << "Yes\n";
	else
		cout << "No\n";
}
