#include <iostream>
using namespace std;

int main(void)
{
	long long N, B, C, cnt;
	long long *A;

	cin >> N;
	A = new long long[N];
	for (int i = 0; i < N; i++)
		cin >> A[i];
	cin >> B >> C;
	cnt = N;
	for (int i = 0; i < N; i++)
	{
		A[i] -= B;
		if (A[i] > 0)
		{
			if (A[i] % C)
				cnt += A[i] / C + 1;
			else
				cnt += A[i] / C;
		}
	}
	cout << cnt << '\n';
	delete []A;
}
