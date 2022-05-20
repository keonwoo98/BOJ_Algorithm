#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int X;
	int arr[1000001];

	cin >> X;
	arr[1] = 0;
	for (int i = 2; i <= X; i++)
	{
		arr[i] = arr[i - 1] + 1;
		if (i % 3 == 0)
			arr[i] = min(arr[i / 3] + 1, arr[i]);
		if (i % 2 == 0)
			arr[i] = min(arr[i / 2] + 1, arr[i]);
	}
	cout << arr[X] << endl;
}
