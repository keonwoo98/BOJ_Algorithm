#include <iostream>
using namespace std;

int main (void)
{
	int N, n1, n2, cnt;

	cin >> N >> n1 >> n2;
	cnt = 0;
	while (n1 != n2)
	{
		n1 = (n1 + 1) / 2;
		n2 = (n2 + 1) / 2;
		N /= 2;
		if (N == 0 && n1 != n2)
		{
			cnt = -1;
			break ;
		}
		cnt++;
	}
	cout << cnt << '\n';
}
