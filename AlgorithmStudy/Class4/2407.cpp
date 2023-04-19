#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string arr[101][101];

string add(string n1, string n2) {
	string num = "";
	int sum = 0;
	int size = max(n1.length(), n2.length());

	for (int i = 0; i < size || sum; i++) {
		if (i < n1.length()) sum += n1[i] - '0';
		if (i < n2.length()) sum += n2[i] - '0';
		num += sum % 10 + '0';
		sum /= 10;
	}
	return num;
}

string comb(int n, int m) {
	if (n == m || m == 0)
		return "1";
	string &ans = arr[n][m];
	if (ans != "")
		return ans;
	ans = add(comb(n - 1, m - 1), comb(n - 1, m));
	return ans;
}

int main() {
	int n, m;
	string res;

	cin >> n >> m;
	res = comb(n, m);
	reverse(res.begin(), res.end());
	cout << res << '\n';
}
