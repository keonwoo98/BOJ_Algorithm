#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a)
{
	long long ans;

	ans = 0;
	for (int i = 0; i < a.size(); i++)
		ans += a[i];
	return ans;
}

int main(void)
{
	vector<int> a;

	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	cout << sum(a) << endl;
}
