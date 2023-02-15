#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N, num;
	map<int, int> m;

	cin >> M;
	while (M--) {
		cin >> num;
		map<int, int>::iterator it = m.find(num);
		if (it == m.end())
			m.insert(make_pair(num, 1));
		else
			it->second++;
	}
	cin >> N;
	while (N--) {
		cin >> num;
		map<int, int>::iterator it = m.find(num);
		if (it == m.end())
			cout << "0 ";
		else
			cout << it->second << ' ';
	}
	cout << '\n';
}
