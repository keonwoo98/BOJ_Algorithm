#include <iostream>
using namespace std;

void merge(int *arr, int *sorted, int left, int mid, int right)
{
	int i, j, k, l;
	
	i = left;
	j = mid + 1;
	k = left;
	while (i <= mid && j <= right)
	{
		if (arr[i] <= arr[j])
			sorted[k++] = arr[i++];
		else
			sorted[k++] = arr[j++];
	}
	if (i > mid)
		for (l = j; l <= right; l++)
			sorted[k++] = arr[l];
	else
		for (l = i; l <= mid; l++)
			sorted[k++] = arr[l];
	for (l = left; l <= right; l++)
		arr[l] = sorted[l];
}

void merge_sort(int *arr, int *sorted, int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(arr, sorted, left, mid);
		merge_sort(arr, sorted, mid + 1, right);
		merge(arr, sorted, left, mid, right);
	}
}

int main(void)
{
	int N;
	int *arr;
	int *sorted;

	cin >> N;
	arr = new int[N];
	sorted = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	merge_sort(arr, sorted, 0, N - 1);
	for (int i = 0; i < N; i++)
		cout << arr[i] << '\n';
	delete []arr;
	delete []sorted;
}
