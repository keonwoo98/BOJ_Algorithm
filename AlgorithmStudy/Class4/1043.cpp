#include <iostream>
#include <vector>
using namespace std;

int parents[51];

int Find(int x) {
	if (parents[x] == x)
		return x;
	return Find(parents[x]);
}

void Union(int x, int y) {
	x = Find(x);
	y = Find(y);
	parents[x] = y;
}

int main() {
	int N, M, people, party, p;
	vector<int> knows;
	vector<int> partys[51];
	bool flag;

	cin >> N >> M >> people;
	for(int i = 0; i < people; i++) {
		cin >> p;
		knows.push_back(p);
	}
	for (int i = 0; i <= N; i++)
		parents[i] = i;
	for (int i = 0; i < M; i++) {
		cin >> party;
		for (int j = 0; j < party; j++) {
			if (j) {
				int prev = p;
				cin >> p;
				Union(prev, p);
			}
			else
				cin >> p;
			partys[i].push_back(p);
		}
	}
	int ans = M;
	for (int i = 0; i < M; i++) {
		flag = false;
		for (int j = 0; j < partys[i].size(); j++) {
			for (int k = 0; k < knows.size(); k++) {
				if (Find(partys[i][j]) == Find(knows[k])) {
					flag = true;
					break;
				}
			}
		}
		if (flag)
			ans--;
	}
	cout << ans << '\n';
}
