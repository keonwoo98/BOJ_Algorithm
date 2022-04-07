#include <iostream>
using namespace std;

int get_num(int k, int n)
{
	if (k == 0)
		return n;
	if (n == 1)
		return 1;
	return (get_num(k, n - 1) + get_num(k - 1, n));
}

int main(void)
{
	int test_case;
	int k, n;

	cin >> test_case;
	while (test_case--)
	{
		cin >> k >> n;
		cout << get_num(k, n) << endl;
	}
}
