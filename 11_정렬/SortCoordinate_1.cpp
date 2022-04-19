#include <iostream>
using namespace std;

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
