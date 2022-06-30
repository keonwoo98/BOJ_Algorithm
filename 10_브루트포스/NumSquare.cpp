#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int N, M, num, area;
	int arr[50][50] = { 0 };
	string s;

	area = 1;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		for (int j = 0; j < M; j++)
			arr[i][j] = s[j] - '0';
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			for (int k = 1; ; k++)
			{
				if (i + k >= N || j + k >= M)
					break ;
				if (i + k < N && j + k < M && arr[i][j] == arr[i][j + k]
					&& arr[i][j] == arr[i + k][j] && arr[i][j] == arr[i + k][j + k] && area < k + 1)
					area = k + 1;
			}
		}
	}
	cout << area * area << '\n';
}