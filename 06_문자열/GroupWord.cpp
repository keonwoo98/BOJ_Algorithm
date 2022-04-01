#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n, cnt, flag;

	cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int alpha[26] = { 0 };
		string s;
		cin >> s;
		flag = 0;
		for (int j = 0; j < s.length(); j++)
		{
			if (j > 0 && alpha[s[j] - 'a'] && s[j - 1] != s[j])
			{
				flag = 1;
				break ;
			}
			alpha[s[j] - 'a']++;
		}
		if (!flag)
			cnt++;
	}
	cout << cnt << endl;
}
