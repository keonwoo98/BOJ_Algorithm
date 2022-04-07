#include <iostream>
using namespace std;

int main(void)
{
	int num, sum, i;

	cin >> num;
	sum = 0;
	for (i = 1; sum < num; i++)
		sum += i;
	i--;
	if (i % 2)
		cout << sum - num + 1 << "/" << i - (sum - num) << endl;
	else
		cout << i - (sum - num) << "/" << sum - num + 1 << endl;
}
