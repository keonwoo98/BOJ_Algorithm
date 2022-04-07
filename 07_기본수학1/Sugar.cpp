#include <iostream>
using namespace std;

int main(void)
{
	int N;
	int div, rem;

	cin >> N;
	div = N / 5;
	rem = N % 5;
	while (div > 0 && rem % 3)
	{
		div--;
		rem += 5;
	}
	if (rem % 3)
		cout << "-1" << endl;
	else
		cout << div + rem / 3 << endl;	
}
