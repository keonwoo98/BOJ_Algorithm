#include <iostream>
using namespace std;

int main(void)
{
	int fixed, produce, sell;

	cin >> fixed >> produce >> sell;
	if (produce >= sell)
	{
		cout << "-1" << endl;
		return 0;
	}
	cout << fixed / (sell - produce) + 1 << endl;
}
