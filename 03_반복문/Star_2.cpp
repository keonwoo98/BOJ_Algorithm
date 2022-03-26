#include <iostream>
using namespace std;

int main(void)
{
	int star;
	int space;

	cin >> star;
	for (int i = 1; i <= star; i++)
	{
		space = star - i;
		while (space--)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
}
