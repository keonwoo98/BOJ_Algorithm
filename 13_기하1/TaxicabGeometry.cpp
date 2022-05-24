#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265359

int main(void)
{
	int r;
	double Euclidean, Taxi;

	cin >> r;
	Euclidean = PI * (pow(r, 2));
	Taxi = 2 * (pow(r, 2));
	printf("%.6f\n%.6f\n", Euclidean, Taxi);
}
