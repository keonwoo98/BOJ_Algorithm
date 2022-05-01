#include <iostream>
using namespace std;

void DFS(int num, int cnt, int N, int M, int arr[], int flag[])
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = num; i <= N; i++)
	{
		if (!flag[i])
		{
			flag[i] = 1;
			arr[cnt] = i;
			DFS(i + 1, cnt + 1, N, M, arr, flag);
			flag[i] = 0;
		}
	}
}

int main(void)
{
	int N, M;
	int arr[9] = { 0, };
	int flag[9] = { 0, };

	cin >> N >> M;
	DFS(1, 0, N, M, arr, flag);
}
