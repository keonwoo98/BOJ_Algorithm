#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M, num;
	long long sum, cnt;
	long long rem[1000] = { 0, };

	cin >> N >> M;
	cnt = 0;
	sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		sum += num;
		rem[sum % M]++;
	}
	for (int i = 0; i < M; i++)
		cnt += rem[i] * (rem[i] - 1) / 2;
	cout << cnt + rem[0] << '\n';
}
