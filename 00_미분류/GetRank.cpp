#include <iostream>
using namespace std;

int main(void)
{
	int N, S, P;
	int cnt, my_rank;
	int rank[100];

	cin >> N >> S >> P;
	for (int i = 0; i < N; i++)
		cin >> rank[i];
	cnt = 0;
	my_rank = 1;
	for (int i = 0; i < N; i++)
	{
		if (S < rank[i])
			my_rank++;
		else if (S > rank[i])
			break ;
		cnt++;
	}
	if (cnt == P)
		my_rank = -1;
	if (N == 0)
		my_rank = 1;
	cout << my_rank << '\n';
}