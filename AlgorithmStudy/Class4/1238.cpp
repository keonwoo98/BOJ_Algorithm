#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define INF 2147483647

int N, M, X;
int dist[1001], res[1001];
vector<pair<int, int> > v[1001];

void dijkstra(int start) {
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
	pq.push(make_pair(start, 0));
	dist[start] = 0;
	while (!pq.empty()) {
		int n = pq.top().first;
		int d = pq.top().second;
		pq.pop();
		for (int i = 0; i < v[n].size(); i++) {
			int nn = v[n][i].first;
			int nd = v[n][i].second;
			if (dist[nn] > d + nd) {
				dist[nn] = d + nd;
				pq.push(make_pair(nn, dist[nn]));
			}
		}
	}
}

int main() {
	int n, s, e;

	cin >> N >> M >> X;
	for (int i = 0; i < M; i++) {
		cin >> n >> s >> e;
		v[n].push_back(make_pair(s, e));
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			dist[j] = INF;
		dijkstra(i);
		res[i] = dist[X];
	}
	for (int i = 1; i <= N; i++)
		dist[i] = INF;
	dijkstra(X);
	for (int i = 1; i <= N; i++)
		res[i] += dist[i];
	sort(res + 1, res + N + 1);
	cout << res[N] << '\n';
}
