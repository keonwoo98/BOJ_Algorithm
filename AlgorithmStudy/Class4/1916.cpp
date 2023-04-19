#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define INF 987654321

int N, M;
int dist[1001];
vector<pair<int, int> > v[1001];

void dijkstra(int start) {
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
	pq.push(make_pair(start, 0));
	dist[start] = 0;
	while (!pq.empty()) {
		int n = pq.top().first;
		int c = pq.top().second;
		pq.pop();
		if (dist[n] < c) continue;
		for (int i = 0; i < v[n].size(); i++) {
			int nn = v[n][i].first;
			int nc = v[n][i].second;
			if (dist[nn] > c + nc) {
				dist[nn] = c + nc;
				pq.push(make_pair(nn, dist[nn]));
			}
		}
	}
}

int main() {
	int s, e, c;

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> s >> e >> c;
		v[s].push_back(make_pair(e, c));
	}
	cin >> s >> e;
	for (int i = 1; i <= N; i++) dist[i] = INF;
	dijkstra(s);
	cout << dist[e] << '\n';
}
