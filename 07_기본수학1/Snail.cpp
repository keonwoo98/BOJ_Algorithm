#include <iostream>
using namespace std;

int main(void)
{
	int day, night, tree;
	int i, h;

	cin >> day >> night >> tree;
	h = 1;
	h += (tree - day) / (day - night);
	if ((tree - day) % (day - night) != 0)
		h++;
	if (day >= tree)
		cout << "1" << endl;
	else
		cout << h << endl;
}
