#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T, n1, n2;
	vector<int> v;

	cin >> T;
	while (T--) {
		cin >> n1 >> n2;
		v.push_back(n1 + n2);
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}
