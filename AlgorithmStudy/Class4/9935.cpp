#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, bomb, ans = "";

	cin >> s >> bomb;
	int len = bomb.length() - 1;
	for (int i = 0; i < s.length(); i++) {
		ans += s[i];
		if (ans[ans.length() - 1] == bomb[len]) {
			if (ans.length() > len) {
				int cnt = 1;
				for (int j = len - 1; j >= 0; j--) {
					if (ans[ans.length() - (len - j) - 1] == bomb[j]) cnt++;
				}
				if (len + 1 == cnt) {
					for (int k = 0; k < len + 1; k++) ans.pop_back();
				}
			}
		}
	}
	if (ans.length())
		cout << ans << '\n';
	else
		cout << "FRULA" << '\n';
}
