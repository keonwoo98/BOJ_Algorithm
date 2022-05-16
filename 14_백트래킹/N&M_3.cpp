#include <iostream>
using namespace std;

int N, M;
int arr[9] = { 0, };

void DFS(int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return ;
	}
	for (int i = 1; i <= N; i++)
	{
		arr[cnt] = i;
		DFS(cnt + 1);
	}
}

int main(void)
{
	cin >> N >> M;
	DFS(0);
}
