#include <iostream>
using namespace std;

int main(void)
{
	int T, n1, n2;
	char comma;

	cin >> T;
	while (T--)
	{
		cin >> n1 >> comma;
		if (comma != ',')
			break ;
		cin >> n2;
		cout << n1 + n2 << endl;
	}
}
