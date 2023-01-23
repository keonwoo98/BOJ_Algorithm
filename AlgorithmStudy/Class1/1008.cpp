#include <iostream>
using namespace std;

int main() {
	double a, b;

	cout << fixed;	// 소수점 고정
	// cout.setf(ios::fixed);
	cout.precision(10);	// 10자리까지 표현
	cin >> a >> b;
	cout << a / b << '\n';
}
