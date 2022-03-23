#include <iostream>
using namespace std;

int main(void)
{
	int num1, num2;
	int h, t, o;

	cin >> num1 >> num2;
	h = num2 / 100;
	t = num2 % 100 / 10;
	o = num2 % 100 % 10 % 10;

	cout << num1 * o << endl;
	cout << num1 * t << endl;
	cout << num1 * h << endl;
	cout << num1 * num2 << endl;
}
