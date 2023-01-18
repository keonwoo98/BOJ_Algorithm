#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, f, c = 0;
	vector<int> v;

	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	cin >> f;
	for (int i = 0; i < n; i++) {
		if (v[i] == f)
			c++;
	}
	cout << c << '\n';
}
