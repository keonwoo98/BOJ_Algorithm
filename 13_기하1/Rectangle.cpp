#include <iostream>
using namespace std;

int main(void)
{
	int AL, AB, AR, AT, BL, BB, BR, BT;

	for (int i = 0; i < 4; i++)
	{
		cin >> AL >> AB >> AR >> AT >> BL >> BB >> BR >> BT;
		if (AL > BR || AR < BL || AT < BB || AB > BT)
			cout << 'd' << '\n';
		else if ((AB == BT && AR == BL) || (AT == BB && AR == BL) || (AT == BB && AL == BR) || (AB == BT && AL == BR))
			cout << 'c' << '\n';
		else if (AT == BB || BT == AB || AL == BR || AR == BL)
			cout << 'b' << '\n';
		else
			cout << 'a' << '\n';
	}
}
