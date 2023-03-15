#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>
#include <algorithm>
using namespace std;

int N, M;
int result[101] = { 0 };
bool visit[101];
vector<int> graph[101];

int bfs(int start) {
	int sum = 0;
	int arr[N + 1];
	queue<int> q;

	memset(arr, 0, N + 1);
	q.push(start);
	visit[start] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < graph[x].size(); i++) {
			int y = graph[x][i];
			if (!visit[y]) {
				q.push(y);
				visit[y] = true;
				if (x == start)
					arr[y] = 1;
				else
					arr[y] = arr[x] + 1;
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		if (i == start)
			continue;
		sum += arr[i];
	}
	return sum;
}

int main() {
	int x, y;

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		if (find(graph[x].begin(), graph[x].end(), y) == graph[x].end())
			graph[x].push_back(y);
		if (find(graph[y].begin(), graph[y].end(), x) == graph[y].end())
			graph[y].push_back(x);
	}
	int min = INT_MAX, inx = 1, cnt;
	for (int i = 1; i <= N; i++) {
		memset(visit, false, sizeof(visit));
		cnt = bfs(i);
		if (min > cnt) {
			min = cnt;
			inx = i;
		}
	}
	cout << inx << '\n';
}
