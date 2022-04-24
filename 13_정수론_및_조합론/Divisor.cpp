#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, num;
	int max, min;
	vector<int> v;

	cin >> N;
	while (N--)
	{
		cin >> num;
		v.push_back(num);
	}
	max = *max_element(v.begin(), v.end());
	min = *min_element(v.begin(), v.end());
	cout << max * min << endl;
}
