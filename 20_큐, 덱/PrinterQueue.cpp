#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int T, N, M, P, cnt, idx, val;
	queue<pair<int, int> > q;
	priority_queue <int> pq;

	cin >> T;
	while (T--)
	{
		cin >> N >> M;
		for (int i = 0; i < N; i++)
		{
			cin >> P;
			q.push(pair<int, int>(i, P));
			pq.push(P);
		}
		cnt = 0;
		while (!q.empty())
		{
			idx = q.front().first;
			val = q.front().second;
			q.pop();
			if (pq.top() == val)
			{
				pq.pop();
				cnt++;
				if (M == idx)
					break ;
			}
			else
				q.push(pair<int, int>(idx, val));
		}
		cout << cnt << '\n';
		while (!q.empty())
			q.pop();
		while (!pq.empty())
			pq.pop();
	}
}
