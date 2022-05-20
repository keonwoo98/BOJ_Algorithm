#include <iostream>
using namespace std;

int k;
int S[13] = { 0, };
int lotto[6] = { 0, };

void DFS(int start, int depth)
{
	if (depth == 6)
	{
		for (int i = 0; i < 6; i++)
			cout << lotto[i] << ' ';
		cout << endl;
		return ;
	}
	for (int i = start; i < k; i++)
	{
		lotto[depth] = S[i];
		DFS(i + 1, depth + 1);
	}
}

int main(void)
{
	while (1)
	{
		cin >> k;
		if (!k)
			break ;
		for (int i = 0; i < k; i++)
			cin >> S[i];
		DFS(0, 0);
		cout << endl;
	}
}
