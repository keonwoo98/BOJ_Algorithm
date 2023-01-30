#include <iostream>
#include <string>
using namespace std;

int main() {
	int flag;
	string s;

	while (1) {
		cin >> s;
		if (s == "0")
			return 0;
		flag = 0;
		for (int i = 0; i < s.length() / 2; i++) {
			if (s[i] != s[s.length() - (i + 1)]) {
				cout << "no\n";
				flag = 1;
				break;
			}
		}
		if (!flag)
			cout << "yes\n";
	}
}
