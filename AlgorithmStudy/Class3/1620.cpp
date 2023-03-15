#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	string s;
	map<int, string> numBook;
	map<string, int> strBook;

	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> s;
		numBook.insert(make_pair(i, s));
		strBook.insert(make_pair(s, i));
	}
	for (int i = 0; i < M; i++) {
		cin >> s;
		if (s[0] >= '0' && s[0] <= '9')
			cout << numBook[stoi(s)] << '\n';
		else
			cout << strBook[s] << '\n';
	}
}
