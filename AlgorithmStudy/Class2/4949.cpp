#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	string str;

	while (1) {
		getline(cin, str);
			if (str == ".")
				break ;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '[')
				s.push(1);
			else if (str[i] == ']') {
				if (s.empty() || s.top() != 1) {
					s.push(1);
					break;
				}
				s.pop();
			}
			else if (str[i] == '(')
				s.push(2);
			else if (str[i] == ')') {
				if (s.empty() || s.top() != 2) {
					s.push(2);
					break;
				}
				s.pop();
			}
		}
		if (s.empty())
			cout << "yes\n";
		else
			cout << "no\n";
		while (!s.empty())
			s.pop();
	}
}
