#include <iostream>
using namespace std;

int main(void)
{
	int up, down, tree;
	int day;

	cin >> up >> down >> tree;
	day = 1;
	day += (tree - up) / (up - down);
	if ((tree - up) % (up - down))
		day++;
	if (up >= tree)
		cout << "1" << endl;
	else
		cout << day << endl;
}
