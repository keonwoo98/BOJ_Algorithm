#include <iostream>
using namespace std;

int main() {
	int A, B, C;

	cin >> A >> B >> C;
	while (A && B && C) {
		if (A > B) {
			if (A > C) {
				if (A * A == B * B + C * C)
					cout << "right\n";
				else
					cout << "wrong\n";
			}
			else {
				if (C * C == A * A + B * B)
					cout << "right\n";
				else
					cout << "wrong\n";
			}
		}
		else {
			if (B > C) {
				if (B * B == A * A + C * C)
					cout << "right\n";
				else
					cout << "wrong\n";
			}
			else {
				if (C * C == A * A + B * B)
					cout << "right\n";
				else
					cout << "wrong\n";
			}
		}
		cin >> A >> B >> C;
	}
}
