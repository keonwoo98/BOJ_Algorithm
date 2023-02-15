#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	int N, age;
	string name;
	map<int, vector<string> > m;

	cin >> N;
	while (N--) {
		cin >> age >> name;
		map<int, vector<string> >::iterator it = m.find(age);
		if (it == m.end()) {
			vector<string> v;
			v.push_back(name);
			m.insert(make_pair(age, v));
		}
		else
			it->second.push_back(name);
	}
	for (map<int, vector<string> >::iterator it = m.begin(); it != m.end(); it++) {
		for (int i = 0; i < it->second.size(); i++)
			cout << it->first << ' ' << it->second[i] << '\n';
	}
}
