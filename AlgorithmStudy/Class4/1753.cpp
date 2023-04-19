#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define INF 987654321

int V, E;
int dist[20001];
vector<pair<int, int> > graph[20001];

void dijkstra(int start) {
	priority_queue<pair<int, int> > pq;
	pq.push(make_pair(0, start));
	dist[start] = 0;
	while (!pq.empty()) {
		int d = -pq.top().first;
		int n = pq.top().second;
		pq.pop();
		for (int i = 0; i < graph[n].size(); i++) {
			int nn = graph[n][i].first;
			int nd = graph[n][i].second;
			if (dist[nn] > d + nd) {
				dist[nn] = d + nd;
				pq.push(make_pair(-dist[nn], nn));
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int start, n, u, v;

	cin >> V >> E >> start;
	for (int i = 0; i < E; i++) {
		cin >> n >> u >> v;
		graph[n].push_back(make_pair(u, v));
	}
	for (int i = 1; i <= V; i++) dist[i] = INF;
	dijkstra(start);
	for (int i = 1; i <= V; i++) {
		if (dist[i] == INF)
			cout << "INF\n";
		else
			cout << dist[i] << '\n';
	}
}
