#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, cnt;
	vector<int> v;

	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	n = v[2];
	while (1)
	{
		cnt = 0;
		for (int i = 0; i < 5; i++)
		{
			if (n % v[i] == 0)
				cnt++;
		}
		if (cnt > 2)
			break ;
		n++;
	}
	cout << n << '\n';
}
