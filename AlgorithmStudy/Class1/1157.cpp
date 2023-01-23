#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int max, index, dup;
	int alphabet[26] = { 0 };
	string s;

	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] > 'Z')
			alphabet[s[i] - 97]++;
		else
			alphabet[s[i] - 65]++;
	}
	max = alphabet[0];
	index = 0;
	for (int i = 1; i < 26; i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
			index = i;
		} else if (alphabet[i] == max)
			dup = max;
	}
	if (dup == max)
		cout << "?\n";
	else
		cout << (char)(index + 65) << '\n';
}
