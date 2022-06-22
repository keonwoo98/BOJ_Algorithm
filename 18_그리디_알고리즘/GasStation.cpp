#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int N, num;
	long long now, total;
	vector<int> distance;
	vector<int> price;

	cin >> N;
	for (int i = 1; i < N; i++)
	{
		cin >> num;
		distance.push_back(num);
	}
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		price.push_back(num);
	}
	now = price[0];
	total = now * distance[0];
	for (int i = 1; i < N - 1; i++)
	{
		if (now < price[i])
			total += now * distance[i];
		else
		{
			now = price[i];
			total += now * distance[i];
		}
	}
	cout << total << '\n';
}
