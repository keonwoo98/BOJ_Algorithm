#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, num, s, e;
	vector<int> v;

	cin >> N >> M;
	v.push_back(0);
	for (int i = 1; i <= N; i++) {
		cin >> num;
		v.push_back(num + v[i - 1]);
	}
	while (M--) {
		cin >> s >> e;
		cout << v[e] - v[s - 1] << '\n';
	}
}
