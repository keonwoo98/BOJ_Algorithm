#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	int *arr;

	cin >> N;
	arr = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - (i + 1); j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
	for (int i = 0; i < N; i++)
		cout << arr[i] << endl;
	delete []arr;
}
