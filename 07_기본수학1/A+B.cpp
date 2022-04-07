#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s1, s2, res;
	int s1_len, s2_len;
	int n1, n2, up, sum;

	cin >> s1 >> s2;
	s1_len = s1.length();
	s2_len = s2.length();
	up = 0;
	while (s1_len || s2_len)
	{
		n1 = 0;
		n2 = 0;
		if (s1_len)
			n1 = s1[--s1_len] - '0';
		if (s2_len)
			n2 = s2[--s2_len] - '0';
		sum = n1 + n2 + up;
		up = sum / 10;
		sum %= 10;
		res += sum + '0';
	}
	if (up)
		res += up + '0';
	for (int i = res.length() - 1; i >= 0; i--)
		cout << res[i];
	cout << endl;
}
