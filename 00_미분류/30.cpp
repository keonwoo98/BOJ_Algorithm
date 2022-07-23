#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(char i, char j)
{
	return i > j;
}

int main(void)
{
	long long num;
	string s;

	cin >> s;
	num = 0;
	sort(s.begin(), s.end(), compare);
	if (s[s.length() - 1] - '0' != 0)
		cout << "-1" << '\n';
	else
	{
		for (int i = 0; i < s.length(); i++)
			num += s[i] - '0';
		if (num % 3)
			cout << "-1" << '\n';
		else
			cout << s << '\n';
	}
}
