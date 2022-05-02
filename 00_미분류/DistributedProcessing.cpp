#include <iostream>
using namespace std;

int main(void)
{
	int T, a, b, res;

	cin >> T;
	while (T--)
	{
		cin >> a >> b;
		res = 1;
		for (int i = 1; i <= b; i++)
		{
			res = res * a;
			res %= 10;
		}
		if (!res)
			cout << "10\n";
		else
			cout << res << '\n';
	}
}
