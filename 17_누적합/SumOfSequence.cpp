#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, L, pivot, left, num, sum;
	vector<int> v;

	cin >> N >> L;
	for (; L <= 100; L++)
	{
		pivot = N / L;
		left = (L - 1) / 2;
		num = pivot - left;
		if (num < 0)
			break ;
		sum = 0;
		for (int i = 0; i < L; i++)
		{
			v.push_back(num);
			sum += num;
			num++;
		}
		if (sum == N)
		{
			for (int i = 0; i < v.size(); i++)
				cout << v[i] << " ";
			cout << '\n';
			break ;
		}
		v.clear();
	}
	if (v.empty())
		cout << "-1" << '\n';
}
