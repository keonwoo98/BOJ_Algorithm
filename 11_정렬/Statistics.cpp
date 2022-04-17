#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	int sum, avg, mid, mode, range;
	int flag, max;
	int *arr;
	int freq[8001] = { 0, };

	cin >> N;
	arr = new int[N];
	sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		sum += arr[i];
		freq[arr[i] + 4000]++;
	}
	sort(arr, arr + N);
	max = 0;
	flag = 0;
	for (int i = 0; i < 8001; i++)
	{
		if (max < freq[i])
		{
			max = freq[i];
			flag = i;
		}
	}
	for (int i = flag + 1; i < 8001; i++)
	{
		if (max == freq[i])
		{
			flag = i;
			break ;
		}
	}
	avg = round((double)sum / (double)N);
	mid = arr[N / 2];
	mode = flag - 4000;
	range = arr[N - 1] - arr[0];
	cout << avg << endl << mid << endl << mode << endl << range << endl;
	delete []arr;
}
