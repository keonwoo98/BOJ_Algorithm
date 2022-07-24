#include <iostream>
using namespace std;

int main(void)
{
	long long broken, max, num;

	cin >> broken >> max;
	switch (broken)
	{
	case 1 :
		num = max * 8;
		break ;
	case 2 :
		num = (max / 2) * 8 + 1 + (max % 2) * 6;
		break ;
	case 3 :
		num = (max / 2) * 8 + 2 + (max % 2) * 4;
		break ;
	case 4 :
		num = (max / 2) * 8 + 3 + (max % 2) * 2;
		break ;
	case 5 :
		num = max * 8 + 4;
		break ;
	}
	cout << num << '\n';
}
