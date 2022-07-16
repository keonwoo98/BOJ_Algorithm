#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M, num, i , j;
	vector<int> v;

	v.push_back(0);
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(v[i] + num);
	}
	cin >> M;
	while (M--)
	{
		cin >> i >> j;
		cout << v[j] - v[i - 1] << '\n';
	}
}
