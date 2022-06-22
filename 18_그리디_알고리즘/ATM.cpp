#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, num;
	long long sum;
	vector<int> v;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	sum = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j >= 0; j--)
			sum += v[j];
	}
	cout << sum << '\n';
}
