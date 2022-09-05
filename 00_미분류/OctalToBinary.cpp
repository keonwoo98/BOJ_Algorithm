#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string octal;
	string binary;

	cin >> octal;
	for (int i = 0; i < octal.length(); i++)
	{
		binary += (octal[i] - '0') / 4 % 2 + '0';
		binary += (octal[i] - '0') / 2 % 2 + '0';
		binary += (octal[i] - '0') % 2 + '0';
	}
	if (binary[0] == '0')
	{
		if (binary[1] == '0')
			cout << binary.substr(2, binary.length()) << '\n';
		else
			cout << binary.substr(1, binary.length()) << '\n';
	}
	else
		cout << binary << '\n';
}
