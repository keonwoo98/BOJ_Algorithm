#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int i;
	int sum;

	i = 0;
	sum = 0;
	cin >> n;
	while (++i <= n)
		sum += i;
	cout << sum << endl;
}
