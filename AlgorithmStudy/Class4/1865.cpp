#include <iostream>
#include <vector>
using namespace std;

#define INF 987654321

int dist[501];
vector<pair<pair<int, int>, int> > v;

void Bellman_Ford(int n) {
	for (int i = 1; i <= n; i++) dist[i] = INF;
	dist[1] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < v.size(); j++) {
			int from = v[j].first.first;
			int to = v[j].first.second;
			int cost = v[j].second;
			if (dist[to] > dist[from] + cost) dist[to] = dist[from] + cost;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		int from = v[i].first.first;
		int to = v[i].first.second;
		int cost = v[i].second;
		if (dist[to] > dist[from] + cost) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main() {
	int T, M, N, W;

	cin >> T;
	while (T--) {
		int s, e, t;
		cin >> N >> M >> W;
		while (M--) {
			cin >> s >> e >> t;
			v.push_back(make_pair(make_pair(s, e), t));
			v.push_back(make_pair(make_pair(e, s), t));
		}
		while (W--) {
			cin >> s >> e >> t;
			v.push_back(make_pair(make_pair(s, e), -t));
		}
		Bellman_Ford(N);
		v.clear();
	}
}
