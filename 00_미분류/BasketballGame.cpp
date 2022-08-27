#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int num, cnt;
	string name, c;
	vector<string> v;
	vector<char> r;

	cin >> num;
	while (num--)
	{
		cin >> name;
		v.push_back(name);
	}
	sort(v.begin(), v.end());
	cnt = 1;
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i - 1][0] == v[i][0])
			cnt++;
		else
			cnt = 1;
		if (cnt == 5)
			r.push_back(v[i][0]);
	}
	if (r.empty())
		cout << "PREDAJA\n";
	else
	{
		for (int i = 0; i < r.size(); i++)
			cout << r[i];
		cout << '\n';
	}
}