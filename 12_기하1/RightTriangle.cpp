#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int side1, side2, side3;

	while (1)
	{
		cin >> side1 >> side2 >> side3;
		if (!(side1 && side2 && side3))
			break ;
		if (pow(side1, 2) == pow(side2, 2) + pow(side3, 2) ||
			pow(side2, 2) == pow(side1, 2) + pow(side3, 2) ||
			pow(side3, 2) == pow(side1, 2) + pow(side2, 2))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}
