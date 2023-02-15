#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	int N, num;
	string s;
	deque<int> d;

	cin >> N;
	while (N--) {
		cin >> s;
		if (s == "push_front") {
			cin >> num;
			d.push_front(num);
		}
		else if (s == "push_back") {
			cin >> num;
			d.push_back(num);
		}
		else if (s == "pop_front") {
			if (d.empty())
				cout << "-1\n";
			else {
				cout << d.front() << '\n';
				d.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (d.empty())
				cout << "-1\n";
			else {
				cout << d.back() << '\n';
				d.pop_back();
			}
		}
		else if (s == "size")
			cout << d.size() << '\n';
		else if (s == "empty")
			cout << d.empty() << '\n';
		else if (s == "front") {
			if (d.empty())
				cout << "-1\n";
			else
				cout << d.front() << '\n';
		}
		else if (s == "back") {
			if (d.empty())
				cout << "-1\n";
			else
				cout << d.back() << '\n';			
		}
	}
}
