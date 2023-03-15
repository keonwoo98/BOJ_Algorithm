#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int N, M;
	string s, p;
	map<string, string> m;

	cin >> N >> M;
	while (N--) {
		cin >> s >> p;
		m.insert(make_pair(s, p));
	}
	while (M--) {
		cin >> s;
		cout << m.find(s)->second << '\n';
	}
}
