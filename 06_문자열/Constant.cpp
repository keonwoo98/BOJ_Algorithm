#include <iostream>
using namespace std;

int rev_num(int num)
{
	int rev;
	int arr[3];

	arr[0] = num / 100;
	arr[1] = num / 10 % 10;
	arr[2] = num % 10;
	rev = (arr[2] * 100) + (arr[1] * 10) + arr[0];
	return (rev);
}

int main(void)
{
	int num1, num2;

	cin >> num1 >> num2;
	if (rev_num(num1) > rev_num(num2))
		cout << rev_num(num1) << endl;
	else
		cout << rev_num(num2) << endl;
}
