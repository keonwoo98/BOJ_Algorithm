#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	string s;
	set<string> d;
	set<string> db;

	cin >> N >> M;
	while (N--) {
		cin >> s;
		d.insert(s);
	}
	while (M--) {
		cin >> s;
		if (d.find(s) != d.end())
			db.insert(s);
	}
	cout << db.size() << '\n';
	for (set<string>::iterator it = db.begin(); it != db.end(); it++)
		cout << *it << '\n';
}
