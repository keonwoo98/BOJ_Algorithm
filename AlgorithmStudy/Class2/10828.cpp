#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int N, num;
	string s;
	stack<int> st;

	cin >> N;
	while (N--) {
		cin >> s;
		if (s == "push") {
			cin >> num;
			st.push(num);
		} else if (s == "pop") {
			if (st.empty())
				cout << "-1\n";
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		} else if (s == "size") {
			cout << st.size() << '\n';
		} else if (s == "empty") {
			cout << st.empty() << '\n';
		} else if (s == "top") {
			if (st.empty())
				cout << "-1\n";
			else
				cout << st.top() << '\n';
		}
	}
}
