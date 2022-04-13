#include <iostream>
using namespace std;

int main(void)
{
	int N, M, sum, temp;
	int *arr;

	cin >> N >> M;
	arr = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sum = 0;
	temp = 0;
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				temp = arr[i] + arr[j] + arr[k];
				if (M - temp < 0)
					continue ;
				if (M - sum > M - temp)
					sum = temp;
			}
		}
	}
	cout << sum << endl;
	delete []arr;
}
