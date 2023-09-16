#include <iostream>
#include <vector>
using namespace std;

int N;
int arr[100001];
bool visit[100001] = {false};
vector<int> graph[100001];

void dfs(int n) {
	visit[n] = true;
	for (int i = 0; i < graph[n].size(); i++) {
		int next = graph[n][i];
		if (!visit[next]) {
			arr[next] = n;
			dfs(next);
		}
	}
}

int main() {
	int a, b;

	cin >> N;
	for (int i = 0; i < N - 1; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	dfs(1);
	for (int i = 2; i <= N; i++) cout << arr[i] << '\n';
}