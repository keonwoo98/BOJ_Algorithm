#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, rope, max;
	vector<int> v;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> rope;
		v.push_back(rope);
	}
	sort(v.begin(), v.end());
	max = 0;
	for (int i = N - 1; i >= 0; i--)
	{
		if (max < v[i] * (N - i))
			max = v[i] * (N - i);
	}
	cout << max << '\n';
}
