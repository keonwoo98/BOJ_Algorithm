#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, K, sum;
	int arr[100000];
	vector<int> v;	

	cin >> N >> K;
	sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		sum += arr[i];
		if (i + 1 >= K)
		{
			v.push_back(sum);
			sum -= arr[i - K + 1];
		}
	}
	cout << *max_element(v.begin(), v.end()) << '\n';
}
