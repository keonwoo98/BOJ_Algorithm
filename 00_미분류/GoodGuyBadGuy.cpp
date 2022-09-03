#include <iostream>
using namespace std;

int main(void)
{
	int T, good, bad;
	string name, is_good;

	cin >> T;
	cin.ignore();
	while (T--)
	{
		getline(cin, name, '\n');
		good = bad = 0;
		for (int i = 0; i < name.length(); i++)
		{
			if (name[i] == 'g' || name[i] == 'G')
				good++;
			else if (name[i] == 'b' || name[i] == 'B')
				bad++;
		}
		cout << name;
		if (good > bad)
			cout << " is GOOD" << '\n';
		else if (good < bad)
			cout << " is A BADDY" << '\n';
		else
			cout << " is NEUTRAL" << '\n';
	}
}
