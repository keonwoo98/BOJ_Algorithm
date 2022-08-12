#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int min, cnt, len;
	string a, b;

	cin >> a >> b;
	min = 50;
	len = b.length() - a.length();
	for (int i = 0; i < len + 1; i++)
	{
		cnt = 0;
		for (int j = 0; j < a.length(); j++)
		{
			if (a[j] != b[i + j])
				cnt++;
		}
		min = min > cnt ? cnt : min;
	}
	cout << min << '\n';
}
