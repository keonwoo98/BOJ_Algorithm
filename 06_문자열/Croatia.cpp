#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int index;
	int pos;
	int cnt;
	string s;
	string alpha[6] = { "c=", "c-", "d-", "lj", "nj", "s=" };
	string dz = "dz=";
	
	cin >> s;
	cnt = s.length();
	for (int i = 0; i < 6; i++)
	{
		pos = -1;
		do
		{
			pos = s.find(alpha[i], pos + 1);
			if (pos != string::npos)
				cnt--;
		} while (pos != string::npos);
	}
	pos = -1;
	do
	{
		pos = s.find("z=", pos + 1);
		if (pos != string::npos)
		{
			if (pos > 0 && s[pos - 1] == 'd')
				cnt -= 2;
			else
				cnt--;
		}
	} while (pos != string::npos);
	cout << cnt << endl;
}
