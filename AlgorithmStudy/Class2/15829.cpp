#include <iostream>
#include <string>
using namespace std;

int main() {
	int L;
	char a;
	long long hash = 0;
	long long r = 1;
	long long M = 1234567891;
	string s;

	cin >> L;
	cin >> s;
	for (int i = 0; i < L; i++) {
		a = s[i];
		hash = (hash + (a - 96) * r) % M;
		r = (r * 31) % M;
	}
	cout << hash << '\n';
}
