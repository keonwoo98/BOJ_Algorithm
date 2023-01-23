#include <iostream>
#include <string>
using namespace std;

int main() {
	int alpha[26];
	string s;

	fill_n(alpha, 26, -1);
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (alpha[s[i] - 'a'] == -1)
			alpha[s[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++)
		cout << alpha[i] << ' ';
	cout << '\n';
}
