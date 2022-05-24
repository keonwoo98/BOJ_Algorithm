#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int W, H, X, Y, P;
	int px, py, cnt;

	cin >> W >> H >> X >> Y >> P;
	cnt = 0;
	while (P--)
	{
		cin >> px >> py;
		if (px >= X && px <= X + W && py >= Y && py <= Y + H)
			cnt++;
		else if ((pow((px - X), 2) + pow((py - (Y + H / 2)), 2) <= pow(H / 2, 2)) && px < X)
			cnt++;
		else if ((pow((px - (X + W)), 2) + pow((py - (Y + H / 2)), 2) <= pow(H / 2, 2)) && px > X + W)
			cnt++;
	}
	cout << cnt << endl;
}
