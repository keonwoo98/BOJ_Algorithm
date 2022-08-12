#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, k, x;
	vector<int> v;

	cin >> N >> k;
	while (N--)
	{
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	cout << v[v.size() - k] << '\n';
}
