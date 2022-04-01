#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int time;
	string dial;
	int arr[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };

	cin >> dial;
	time = 0;
	for (int i = 0; i < dial.length(); i++)
	{
		if (!isalpha(dial[i]))
			return 0;
		if (dial[i] > 'Z')
			return 0;
		time += arr[dial[i] - 'A'];
	}
	cout << time << endl;
}
