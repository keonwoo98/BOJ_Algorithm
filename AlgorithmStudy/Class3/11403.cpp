#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int N;
int map[101][101] = { 0 };
bool visit [101];
vector<int> graph[101];

void dfs(int x) {
	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visit[y]) {
			visit[y] = true;
			dfs(y);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int dot;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> dot;
			if (dot)
				graph[i].push_back(j);
		}
	}
	for (int i = 1; i <= N; i++) {
		memset(visit, false, sizeof(visit));
		dfs(i);
		for (int j = 1; j <= N; j++) {
			if (visit[j])
				map[i][j] = 1;
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			cout << map[i][j] << ' ';
		cout << '\n';
	}
}
