#include <iostream>
using namespace std;

// void merge(int **arr, int **sorted, int left, int mid, int right)
// {
// 	int i, j, k, l;

// 	i = left;
// 	j = mid + 1;
// 	k = left;
// 	while (i <= mid && j <= right)
// 	{
// 		if (arr[i][0] < arr[j][0])
// 			sorted[k] = arr[i++];
// 		else if (arr[i][0] > arr[j][0])
// 			sorted[k] = arr[j++];
// 		else
// 		{
// 			if (arr[i][1] < arr[j][1])
// 				sorted[k] = arr[i++];
// 			else
// 				sorted[k] = arr[j++];
// 		}
// 		k++;
// 	}
// 	if (i > mid)
// 		for (l = j; l <= mid; l++)
// 			sorted[k++] = arr[l];
// 	else
// 		for (l = i; l <= mid; l++)
// 			sorted[k++] = arr[l];
// 	for (l = left; l <= right; l++)
// 		arr[l] = sorted[l];
// }

// void merge_sort(int **arr, int **sorted, int left, int right)
// {
// 	int mid;

// 	if (left < right)
// 	{
// 		mid = (left + right) / 2;
// 		merge_sort(arr, sorted, left, mid);
// 		merge_sort(arr, sorted, mid + 1, right);
// 		merge(arr, sorted, left, mid, right);
// 	}
// }

void merge_sort(int **arr, int **sorted, const int start, const int end)
{
	int mid = (start + end) / 2;
	if (start == end)
		return;
	else
	{
		merge_sort(arr, sorted, start, mid);
		merge_sort(arr, sorted, mid + 1, end);

		int left = start;
		int right = mid + 1;
		int idx = start;

		while (left <= mid && right <= end)
		{
			if (arr[left][0] < arr[right][0])
			{
				sorted[idx] = arr[left];
				left++;
			}
			else if (arr[left][0] > arr[right][0])
			{
				sorted[idx] = arr[right];
				right++;
			}
			else
			{
				if (arr[left][1] < arr[right][1])
				{
					sorted[idx] = arr[left];
					left++;
				}
				else
				{
					sorted[idx] = arr[right];
					right++;
				}
			}
			idx++;
		}

		while (left <= mid)
		{
			sorted[idx] = arr[left];
			idx++;
			left++;
		}
		while (right <= end)
		{
			sorted[idx] = arr[right];
			idx++;
			right++;
		}
		for (int i = start; i <= end; i++)
		{
			arr[i] = sorted[i];
		}
	}
}

int main(void)
{
	int N;
	int **arr;
	int **sorted;

	cin >> N;
	arr = new int*[N];
	sorted = new int*[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[2];
		cin >> arr[i][0] >> arr[i][1];
	}
	merge_sort(arr, sorted, 0, N - 1);
	for (int i = 0; i < N; i++)
		cout << arr[i][0] << ' ' << arr[i][1] << '\n';
	for (int i = 0; i < N; i++)
		delete arr[i];
	delete []arr;
	delete []sorted;
}

/*
#include <vector>
#include <algorithm>
int main(void)
{
	int N, x, y;
	vector< pair<int, int> > v;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		v.push_back(pair<int, int>(x, y));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++)
		cout << v[i].first << ' ' << v[i].second << '\n';
}
*/
