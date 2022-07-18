#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void)
{
	int N, K, num;
	queue<int> q;
	vector<int> v;

	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		q.push(i);
	while (!q.empty())
	{
		for (int i = 0; i < K; i++)
		{
			num = q.front();
			q.pop();
			if (i + 1 != K)
				q.push(num);
			else
				v.push_back(num);
		}
	}
	cout << "<";
	for (int i = 0; i + 1< N; i++)
		cout << v[i] << ", ";
	cout << v[N - 1] << ">" << '\n';
}
