#include <iostream>
using namespace std;

int main(void)
{
	int arr[10];
	int arr2[42];
	int div, i;
	int result;

	for (i = 0; i < 10; i++)
		cin >> arr[i];
	div = 0;
	i = 0;
	result = 0;
	for (i = 0; i < 42; i++)
		arr2[i] = 0;
	for (i = 0; i < 10; i++)
	{
		div = arr[i] % 42;
		arr2[div]++;
	}
	for (i = 0; i < 42; i++)
	{
		if (arr2[i])
			result++;
	}
	cout << result << endl;
}
