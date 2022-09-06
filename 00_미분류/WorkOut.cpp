#include <iostream>
using namespace std;

int main(void)
{
	int N, m, M, T, R, hb, minutes;

	cin >> N >> m >> M >> T >> R;
	if (m + T > M)
	{
		cout << "-1" << endl;
		return 0;
	}
	hb = m;
	minutes = 0;
	while (N)
	{
		if (hb + T <= M)
		{
			hb += T;
			N--;
		}
		else
		{
			hb -= R;
			if (hb < m)
				hb = m;
		}
		minutes++;
	}
	cout << minutes << '\n';
}
