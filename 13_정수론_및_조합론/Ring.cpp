#include <iostream>
#include <vector>
using namespace std;

int get_gcd(int n1, int n2)
{
	int tmp;

	while (n2)
	{
		tmp = n1 % n2;
		n1 = n2;
		n2 = tmp;
	}
	return n1;
}

int main(void)
{
	int N, ring, num, gcd;
	vector< pair<int, int> > v;

	cin >> N;
	cin >> ring;
	for (int i = 0; i < N - 1; i++)
	{
		cin >> num;
		if (ring == num)
			v.push_back(pair<int, int>(1, 1));
		else
		{
			gcd = get_gcd(ring, num);
			v.push_back(pair<int, int>(ring / gcd, num / gcd));
		}
	}
	for (int i = 0; i < N - 1; i++)
		cout << v[i].first << '/' << v[i].second << '\n';
}
