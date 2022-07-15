#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
	string str, sub;
	vector<string> v;

	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		sub = str.substr(i, string::npos);
		v.push_back(sub);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}
