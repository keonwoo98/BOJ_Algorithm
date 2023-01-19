#include <iostream>
using namespace std;

int main() {
	int scale[8];
	int flag = 0;

	for (int i = 0; i < 8; i++)
		cin >> scale[i];
	if (scale[0] + 1 == scale[1])
		flag = 1;
	else if (scale[0] == scale[1] + 1)
		flag = 2;
	for (int i = 0; i < 7; i++) {
		if (scale[i] + 1 == scale[i + 1]) {
			if (flag != 1) {
				flag = 0;
				break;
			}
			flag = 1;
		}
		else if (scale[i + 1] + 1 == scale[i]) {
			if (flag != 2) {
				flag = 0;
				break;
			}
			flag = 2;
		}
		else
			flag = 0;
	}
	if (flag == 1)
		cout << "ascending\n";
	else if (flag == 2)
		cout << "descending\n";
	else
		cout << "mixed\n";
}
