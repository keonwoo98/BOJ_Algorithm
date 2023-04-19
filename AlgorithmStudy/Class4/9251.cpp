#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	string s1, s2;
	int LCS[1001][1001] = { 0 };

	cin >> s1 >> s2;
	for (int i = 1; i <= s1.length(); i++) {
		for (int j = 1; j <= s2.length(); j++) {
			if (s1[i - 1] == s2[j - 1])
				LCS[i][j] = LCS[i - 1][j - 1] + 1;
			else
				LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
		}
	}
	cout << LCS[s1.length()][s2.length()] << '\n';
}