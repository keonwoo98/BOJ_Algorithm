#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str;
	set<string> s;

	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; i + j <= str.length(); j++)
			s.insert(str.substr(i, j));
	}
	cout << s.size() - 1 << '\n';
}
