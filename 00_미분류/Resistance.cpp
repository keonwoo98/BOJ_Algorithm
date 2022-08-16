#include <iostream>
#include <string>
using namespace std;

long long result;

void value(string s)
{
	if (s == "black")
	{
		result *= 10;
		result += 0;
	}
	else if (s == "brown")
	{
		result *= 10;
		result += 1;
	}
	else if (s == "red")
	{
		result *= 10;
		result += 2;
	}
	else if (s == "orange")
	{
		result *= 10;
		result += 3;
	}
	else if (s == "yellow")
	{
		result *= 10;
		result += 4;
	}
	else if (s == "green")
	{
		result *= 10;
		result += 5;
	}
	else if (s == "blue")
	{
		result *= 10;
		result += 6;
	}
	else if (s == "violet")
	{
		result *= 10;
		result += 7;
	}
	else if (s == "grey")
	{
		result *= 10;
		result += 8;
	}
	else if (s == "white")
	{
		result *= 10;
		result += 9;
	}
}

void mul(string s)
{
	if (s == "black")
	{
		result *= 1;
	}
	else if (s == "brown")
	{
		result *= 10;
	}
	else if (s == "red")
	{
		result *= 100;
	}
	else if (s == "orange")
	{
		result *= 1000;
	}
	else if (s == "yellow")
	{
		result *= 10000;
	}
	else if (s == "green")
	{
		result *= 100000;
	}
	else if (s == "blue")
	{
		result *= 1000000;
	}
	else if (s == "violet")
	{
		result *= 10000000;
	}
	else if (s == "grey")
	{
		result *= 100000000;
	}
	else if (s == "white")
	{
		result *= 1000000000;
	}
}

int main(void)
{
	string s;

	result = 0;
	cin >> s;
	value(s);
	cin >> s;
	value(s);
	cin >> s;
	mul(s);
	cout << result << endl;
}
