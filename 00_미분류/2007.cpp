#include <iostream>
using namespace std;

int main(void)
{
	int month, day, sum;
	int year[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string DoW[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

	cin >> month >> day;
	sum = 0;
	for (int i = 0; i < month - 1; i++)
		sum += year[i];
	sum += day;
	sum = sum % 7 - 1;
	if (sum == -1)
		sum = 6;
	cout << DoW[sum] << endl;
}
