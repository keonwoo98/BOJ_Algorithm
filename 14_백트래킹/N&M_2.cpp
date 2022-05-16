#include <iostream>
using namespace std;

int N, M;
int arr[9] = { 0, };
bool visited[9] = { 0, };

void DFS(int num, int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return ;
	}
	for (int i = num; i <= N; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			arr[cnt] = i;
			DFS(i + 1, cnt + 1);
			visited[i] = false;
		}
	}
}

int main(void)
{
	cin >> N >> M;
	DFS(1, 0);
}
