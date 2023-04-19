#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define INF 200000000

int N, E;
int dist[3][1001];
vector<pair<int, int> > v[801];

void dijkstra(int start, int di) {
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
	pq.push(make_pair(start, 0));
	dist[di][start] = 0;
	while (!pq.empty()) {
		int n = pq.top().first;
		int d = pq.top().second;
		pq.pop();
		for (int i = 0; i < v[n].size(); i++) {
			int nn = v[n][i].first;
			int nd = v[n][i].second;
			if (dist[di][nn] > d + nd) {
				dist[di][nn] = d + nd;
				pq.push(make_pair(nn, dist[di][nn]));
			}
		}
	}
}

int main() {
	int a, b, c, n1, n2;

	cin >> N >> E;
	for (int i = 0; i < E; i++) {
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));
	}
	cin >> n1 >> n2;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j <= N; j++)
			dist[i][j] = INF;
	dijkstra(1, 0);
	dijkstra(n1, 1);
	dijkstra(n2, 2);
	int res = min(dist[0][n1] + dist[1][n2] + dist[2][N], dist[0][n2] + dist[2][n1] + dist[1][N]);
	if (res >= INF)
		cout << "-1\n";
	else
		cout << res << '\n';
}
