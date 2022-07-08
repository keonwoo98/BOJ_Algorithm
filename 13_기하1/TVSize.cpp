#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int D, H, W;
	double r, d, x, y;

	cin >> D >> H >> W;
	d = sqrt(pow(H, 2) + pow(W, 2));
	r = D / d;
	x = W * r;
	y = H * r;
	cout << (int)y << " " << (int)x << '\n';
}
