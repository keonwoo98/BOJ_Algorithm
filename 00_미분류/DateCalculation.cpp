#include <iostream>
using namespace std;

int main(void)
{
	int E, S, M, Y;
	int e, s, m;

	cin >> E >> S >> M;
	Y = 1; e = 1; s = 1; m = 1;
	while (1)
	{
		if (e == 16) e = 1;
		if (s == 29) s = 1;
		if (m == 20) m = 1;
		if (e == E && s == S && m == M)
			break ;
		Y++; e++; s++; m++;
	}
	cout << Y << '\n';
}
