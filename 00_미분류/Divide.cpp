#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n, d;
	string s;

	cin >> s >> d;
	s[s.length() - 2] = '0';
	s[s.length() - 1] = '0';
	n = stoi(s);
	for (int i = 0; i < 100; i++)
	{
		if (n % d == 0)
		{
			if (i < 10)
				cout << '0';
			cout << i << '\n';
			break ;
		}
		n++;
	}
}
