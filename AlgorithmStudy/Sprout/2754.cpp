#include <iostream>
#include <string>
using namespace std;

int main() {
	string c;
	string s = "A+:4.3A0:4.0A-:3.7B+:3.3B0:3.0B-:2.7C+:2.3C0:2.0C-:1.7D+:1.3D0:1.0D-:0.7F:0.0";

	cin >> c;
	int pos = s.find(c);
	while (s[pos] != ':')
		pos++;
	pos++;
	cout << s[pos];
	pos++;
	cout << s[pos];
	pos++;
	cout << s[pos] << '\n';
}
