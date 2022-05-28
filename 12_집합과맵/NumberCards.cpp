#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, M, num;
	int left, right, mid, flag;
	vector<int> v1, v2;

	cin >> N;
	while (N--)
	{
		cin >> num;
		v1.push_back(num);
	}
	cin >> M;
	while (M--)
	{
		cin >> num;
		v2.push_back(num);
	}
	sort(v1.begin(), v1.end());
	for (int i = 0; i < v2.size(); i++)
	{
		left = 0;
		right = v1.size() - 1;
		while (left <= right)
		{
			flag = 0;
			mid = (left + right) / 2;
			if (v1[mid] == v2[i])
			{
				flag = 1;
				cout << "1 ";
				break ;
			}
			if (v1[mid] > v2[i])
				right = mid - 1;
			else
				left = mid + 1;
		}
		if (!flag)
			cout << "0 ";
	}
	cout << endl;
}
