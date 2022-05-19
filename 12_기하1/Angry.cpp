#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
	int N, W, H, matches;
	double C;

	cin >> N >> W >> H;
	C = sqrt(pow(W, 2) + pow(H, 2));
	while (N--)
	{
		cin >> matches;
		if (static_cast<double>(matches) > C)
			cout << "NE\n";
		else
			cout << "DA\n";
	}
}
