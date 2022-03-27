#include <iostream>
using namespace std;

int main(void)
{
	int arr[9];
	int i;
	int max, index;

	for (i = 0; i < 9; i++)
		cin >> arr[i];
	max = arr[0];
	index = 1;
	for (i = 1; i < 9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			index = i + 1;
		}
	}
	cout << max << endl;
	cout << index << endl;
}
