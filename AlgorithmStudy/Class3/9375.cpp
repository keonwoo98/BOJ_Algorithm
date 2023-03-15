#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	int T, N;
	string cloth, kind;
	map<string, vector<string> > m;

	cin >> T;
	while (T--) {
		m.clear();
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> cloth >> kind;
			map<string, vector<string> >::iterator it = m.find(kind);
			if (it == m.end()) {
				vector<string> v;
				v.push_back(cloth);
				m.insert(make_pair(kind, v));
			}
			else
				it->second.push_back(cloth);
		}
		int cnt = 1;
		for (map<string, vector<string> >::iterator it = m.begin(); it != m.end(); it++)
			cnt *= it->second.size() + 1;
		cout << cnt - 1 << '\n';
	}
}
