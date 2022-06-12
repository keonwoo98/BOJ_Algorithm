#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int K, num, sum;
	vector<int> v;

	cin >> K;
	while (K--)
	{
		cin >> num;
		if (!num)
			v.pop_back();
		else
			v.push_back(num);
	}
	sum = 0;
	for (int i = 0; i < v.size(); i++)
		sum += v[i];
	cout << sum << endl;
}
