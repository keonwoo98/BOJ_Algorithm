#include <iostream>
#include <vector>
using namespace std;

int c, p;
int cnt = 0;
bool visit[101] = { false };
vector<int> graph[101];

void dfs(int x) {
	visit[x] = true;
	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visit[y]) {
			cnt++;
			dfs(y);
		}
	}
}

int main() {
	int c1, c2;

	cin >> c >> p;
	for (int i = 0; i < p; i++) {
		cin >> c1 >> c2;
		graph[c1].push_back(c2);
		graph[c2].push_back(c1);
	}
	dfs(1);
	cout << cnt << '\n';
}
