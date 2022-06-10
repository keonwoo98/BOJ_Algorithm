#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int N, M, num, n1, n2;
	int sum[100000];

	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		sum[i + 1] = sum[i] + num;
	}
	while (M--)
	{
		cin >> n1 >> n2;
		cout << sum[n2] - sum[n1 - 1] << '\n';
	}
}
