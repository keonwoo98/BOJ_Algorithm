#include <iostream>
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
	int T, n1, n2;
	int gcd, lcm;

	cin >> T;
	while (T--)
	{
		cin >> n1 >> n2;
		gcd = get_gcd(n1, n2);
		lcm = n1 * n2 / gcd;
		cout << lcm << '\n';
	}
}
