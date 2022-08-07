#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void hanoi(int n, int from, int to, int other)
{
	if (!n)
		return;
	hanoi(n - 1, from, other, to);
	cout << from << " " << to << "\n";
	hanoi(n - 1, other, to, from);
}

int main(void)
{
	int num;
	string s;

	cin >> num;
	s = to_string(pow(2, num));
	s = s.substr(0, s.find('.'));
	s[s.length() - 1] -= 1;
	cout << s << '\n';
	if (num <= 20)
		hanoi(num, 1, 3, 2);
}
