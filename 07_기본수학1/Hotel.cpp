#include <iostream>
using namespace std;

int main(void)
{
	int num, H, W, N;

	cin >> num;
	while (num--)
	{
		cin >> H >> W >> N;
		if (N % H)
			cout << (N % H) * 100 + (N / H + 1) << endl;
		else
			cout << H * 100 + (N / H) << endl;
	}
}
