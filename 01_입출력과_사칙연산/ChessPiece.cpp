#include <iostream>
using namespace std;

int main(void)
{
	int n[6];
	int chess[6] = { 1, 1, 2, 2, 2, 8 };

	for (int i = 0; i < 6; i++)
	{
		cin >> n[i];
		cout << chess[i] - n[i] << " ";
	}
}
