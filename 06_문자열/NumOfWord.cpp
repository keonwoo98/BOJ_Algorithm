#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int cnt;
	string s;

	getline(cin, s);
	if (s.empty())
	{
		cout << "0" << endl;
		return 0;
	}
	cnt = 1;
	for (int i = 0; i < s.length(); i++)
	{
		if (i && s[i] == ' ')
			cnt++;
	}
	if (s[s.length() - 1] == ' ')
		cnt--;
	cout << cnt << endl;
}
