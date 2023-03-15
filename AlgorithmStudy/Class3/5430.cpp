#include <iostream>
#include <string>
#include <deque>
using namespace std;

int N;
bool rev;
deque<int> dq;

void parse(string s) {
	int pos, cnt;
	string n;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			pos = i;
			cnt = 0;
			while (s[i] >= '0' && s[i] <= '9') {
				i++;
				cnt++;
			}
			n = s.substr(pos, cnt);
			dq.push_back(stoi(n));
		}
	}
}

void func(string s) {
	rev = false;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'R')
			rev = !rev;
		else if (s[i] == 'D') {
			if (!dq.size()) {
				cout << "error\n";
				return ;
			}
			if (rev)
				dq.pop_back();
			else
				dq.pop_front();
		}
	}
	cout << '[';
	if (rev) {
		for (int i = dq.size() - 1; i >= 0; i--) {
			cout << dq[i];
			if (i > 0)
				cout << ',';
		}
	}
	else {
		for (int i = 0; i < dq.size(); i++) {
			cout << dq[i];
			if (i + 1 < dq.size())
				cout << ',';
		}
	}
	cout << "]\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	string cmd, input;

	cin >> T;
	while (T--) {
		dq.clear();
		cin >> cmd >> N >> input;
		parse(input);
		func(cmd);
	}
}
