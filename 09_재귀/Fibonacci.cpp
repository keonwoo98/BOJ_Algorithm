#include <iostream>
using namespace std;

int fibonacchi(int num)
{
	if (!num)
		return 0;
	else if (num == 1)
		return 1;
	return (fibonacchi(num - 1) + fibonacchi(num - 2));
}

int main(void)
{
	int num;

	cin >> num;
	cout << fibonacchi(num) << endl;
}
