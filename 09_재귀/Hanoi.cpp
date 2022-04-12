#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int from, int to, int other)
{
	if (!n)
		return ;
	hanoi(n - 1, from, other, to);
	cout << from << " " << to << "\n";
	hanoi(n - 1, other, to, from);
}

int main(void)
{
	int num;

	cin >> num;
	cout << (int)pow(2, num) - 1 << "\n";
	hanoi(num, 1, 3, 2);
}
