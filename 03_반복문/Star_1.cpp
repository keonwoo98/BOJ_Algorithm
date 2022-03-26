#include <iostream>
using namespace std;

int main(void)
{
	int star;

	cin >> star;
	for (int i = 1; i <= star; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
}
