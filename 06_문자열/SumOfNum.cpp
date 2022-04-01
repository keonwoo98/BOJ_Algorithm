#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	int n, sum;
	string s;

	cin >> n;
	cin >> s;
	sum = 0;
	for (int i = 0; i < n; i++)
		sum += s[i] - '0';
	cout << sum << endl;
}