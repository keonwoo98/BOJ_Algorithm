#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int n, num;
	vector<char> v;
	stack<int> s, seq;
	stack<int> input, comp;

	cin >> n;
	for (int i = n; i > 0; i--)
		s.push(i);
	for (int i = 0; i < n; i++) {
		cin >> num;
		input.push(num);
		while (!s.empty() && num >= s.top()) {
			seq.push(s.top());
			s.pop();
			v.push_back('+');
		}
		while (!seq.empty() && num <= seq.top()) {
			comp.push(seq.top());
			seq.pop();
			v.push_back('-');
		}
	}
	while (n--) {
		if (input.top() != comp.top())
			v.clear();
		input.pop();
		comp.pop();
	}
	if (v.empty())
		cout << "NO\n";
	else
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << '\n';
}
