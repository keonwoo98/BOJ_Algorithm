#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	int N;
	string str;
	vector<string> v;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		v.push_back(str);
	}
	str = v[0];
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < str.length(); j++)
		{
			if (v[0][j] != v[i][j])
				str[j] = '?';
		}
	}
	cout << str << '\n';
}
