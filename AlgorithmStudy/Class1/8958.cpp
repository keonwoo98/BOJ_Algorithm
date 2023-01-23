#include <iostream>
#include <string>
using namespace std;

int main() {
	int T, score, accum;
	string s;

	cin >> T;
	while (T--) {
		cin >> s;
		score = 0;
		accum = 1;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O') {
				score += accum;
				accum++;
			}
			else
				accum = 1;
		}
		cout << score << '\n';
	}
}
