#include <iostream>
using namespace std;

int main(void)
{
	int N, rank;
	int **arr;

	cin >> N;
	arr = new int*[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[2];
		cin >> arr[i][0] >> arr[i][1];
	}
	for (int i = 0; i < N; i++)
	{
		rank = 1;
		for (int j = 0; j < N; j++)
		{
			if (i == j)
				continue ;
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
				rank++;
		}
		cout << rank << ' ';
	}
	cout << endl;
	for (int i = 0; i < N; i++)
		delete arr[i];
	delete []arr;
}
