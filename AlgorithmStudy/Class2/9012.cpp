#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int n;
	string s;
	stack<int> st;

	cin >> n;
	while (n--) {
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(')
				st.push(1);
			else if (s[i] == ')') {
				if (st.empty()) {
					st.push(1);
					break;
				}
				st.pop();
			}
		}
		if (st.empty())
			cout << "YES\n";
		else
			cout << "NO\n";
		while (!st.empty())
			st.pop();
	}
}