#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, M, pack, indi, price;
	vector<int> p;
	vector<int> i;

	cin >> N >> M;
	while (M--)
	{
		cin >> pack >> indi;
		p.push_back(pack);
		i.push_back(indi);
	}
	sort(p.begin(), p.end());
	sort(i.begin(), i.end());
	price = 0;
	while (N > 0)
	{
		if (N > 5)
		{
			if (p[0] < i[0] * 6)
				price += p[0];
			else
				price += i[0] * 6;
			N -= 6;
		}
		else
		{
			if (p[0] < N * i[0])
				price += p[0];
			else
				price += N * i[0];
			break ;
		}
	}
	cout << price << '\n';
}
