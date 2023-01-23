#include <iostream>
#include <string>
using namespace std;

int main() {
	int t, n;
	string s;

	cin >> t;
	while (t--) {
		cin >> n >> s;
		for (int i = 0; i < s.length(); i++)
			for (int j = 0; j < n; j++)
				cout << s[i];
		cout << '\n';
	}
}
