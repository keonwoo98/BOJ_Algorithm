#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;
	n /= 10;
	switch (n)
	{
	case 10: case 9:
		cout << "A\n";
		break;
	case 8:
		cout << "B\n";
		break;
	case 7:
		cout << "C\n";
		break;
	case 6:
		cout << "D\n";
		break;
	default:
		cout << "F\n";
		break;
	}
}
