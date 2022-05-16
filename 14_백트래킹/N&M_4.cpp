#include <iostream>
using namespace std;

int N, M;
int arr[9] = { 0, };

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
		arr[cnt] = i;
		DFS(i, cnt + 1);
	}
}

int main(void)
{
	cin >> N >> M;
	DFS(1, 0);
}
