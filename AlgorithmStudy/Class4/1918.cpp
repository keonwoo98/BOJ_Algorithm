#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string s;
	stack<char> st;

	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			cout << s[i];
		else if (s[i] == '(')
			st.push(s[i]);
		else if (s[i] == '*' || s[i] == '/') {
			while (!st.empty() && (st.top() == '*' || st.top() == '/')) {
				cout << st.top();
				st.pop();
			}
			st.push(s[i]);
		}
		else if (s[i] == '+' || s[i] == '-') {
			while (!st.empty() && st.top() != '(') {
				cout << st.top();
				st.pop();
			}
			st.push(s[i]);
		}
		else if (s[i] == ')') {
			while (!st.empty() && st.top() != '(') {
				cout << st.top();
				st.pop();
			}
			st.pop();
		}
	}
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
	cout << '\n';
}

