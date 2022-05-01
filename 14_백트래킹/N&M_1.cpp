#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> seq)
{
	for (int i = 0; i < seq.size(); i++)
		cout << seq[i] << ' ';
	cout << '\n';
}

void DFS(int cnt, int N, int M, int arr[], int flag[], vector<int> *seq)
{
	if (cnt == M)
		print(*seq);
	for (int i = 0; i < N; i++)
	{
		if (flag[i])
			continue ;
		flag[i] = 1;
		seq->push_back(arr[i]);
		DFS(cnt + 1, N, M, arr, flag, seq);
		seq->pop_back();
		flag[i] = 0;
	}
}

int main(void)
{
	int N, M;
	int arr[8];
	int flag[8] = { 0, };
	vector<int> seq;

	cin >> N >> M;
	for (int i = 0; i < N; i++)
		arr[i] = i + 1;
	DFS(0, N, M, arr, flag, &seq);
}

// #include <iostream>
// #define MAX 9
// using namespace std;

// int n, m;
// int arr[MAX] = {
// 	0,
// };
// bool visited[MAX] = {
// 	0,
// };

// void dfs(int cnt)
// {
// 	if (cnt == m)
// 	{
// 		for (int i = 0; i < m; i++)
// 			cout << arr[i] << ' ';
// 		cout << '\n';
// 		return;
// 	}
// 	for (int i = 1; i <= n; i++)
// 	{
// 		if (!visited[i])
// 		{
// 			visited[i] = true;
// 			arr[cnt] = i;
// 			dfs(cnt + 1);
// 			visited[i] = false;
// 		}
// 	}
// }

// int main()
// {
// 	cin >> n >> m;
// 	dfs(0);
// }