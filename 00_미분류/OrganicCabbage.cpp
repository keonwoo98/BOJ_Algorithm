#include <iostream>
#include <string.h>
using namespace std;

int M, N;
int field[50][50];
int visited[50][50];
int dy[4] = { 1, -1, 0, 0 };
int dx[4] = { 0, 0, 1, -1 };

void DFS(int y, int x)
{
	int nx, ny;

	for (int i = 0; i < 4; i++)
	{
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || ny >= N || nx < 0 || nx >= M)
			continue ;
		if (field[ny][nx] && !visited[ny][nx])
		{
			visited[ny][nx]++;
			DFS(ny, nx);
		}
	}
}

int main(void)
{
	int T, K, x, y, ww;

	cin >> T;
	while (T--)
	{
		cin >> M >> N >> K;
		memset(field, 0, sizeof(field));
		memset(visited, 0, sizeof(visited));
		ww = 0;
		while (K--)
		{
			cin >> x >> y;
			field[y][x] = 1;
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (field[i][j] && !visited[i][j])
				{
					ww++;
					visited[i][j]++;
					DFS(i, j);
				}
			}
		}
		cout << ww << '\n';
	}
}
