#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, X, num;
	vector<int> v;

	cin >> N >> X;
	while (N--) {
		cin >> num;
		if (X > num)
			v.push_back(num);
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << '\n';
}
