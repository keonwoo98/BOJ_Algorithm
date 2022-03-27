#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	int result;
	int arr[10];
	int div, i;

	cin >> a >> b >> c;
	result = a * b * c;
	for (i = 0; i < 10; i++)
		arr[i] = 0;
	div = 0;
	i = 0;
	while (result > 0)
	{
		div = result % 10;
		arr[div]++;
		result = result / 10;
	}
	for (i = 0; i < 10; i++)
		cout << arr[i] << endl;
}
