#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt = 0;
	string s;

	getline(cin, s);
	if (!s.empty())
		cnt++;
	for (int i = 0; i < s.length(); i++)
		if (i && s[i] == ' ')
			cnt++;
	if (s[s.length() - 1] == ' ')
		cnt--;
	cout << cnt << '\n';
}
