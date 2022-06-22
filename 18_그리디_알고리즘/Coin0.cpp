#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int N, K, coin, cnt;
	vector<int> v;

	cnt = 0;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> coin;
		v.push_back(coin);
	}
	for (int i = N - 1; i >= 0; i--)
	{
		if (K == 0)
			break ;
		while (K >= v[i])
		{
			K -= v[i];
			cnt++;
		}
	}
	cout << cnt << '\n';
}
