#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, num;
	int arr[21] = { 0, };
	string cmd;

	cin >> T;
	while (T--)
	{
		cin >> cmd;
		if (cmd == "add")
		{
			cin >> num;
			if (!arr[num])
				arr[num] = 1;
		}
		else if (cmd == "remove")
		{
			cin >> num;
			if (arr[num])
				arr[num] = 0;
		}
		else if (cmd == "check")
		{
			cin >> num;
			if (arr[num])
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (cmd == "toggle")
		{
			cin >> num;
			if (arr[num])
				arr[num] = 0;
			else
				arr[num] = 1;
		}
		else if (cmd == "all")
		{
			for (int i = 1; i <= 20; i++)
				arr[i] = 1;
		}
		else if (cmd == "empty")
			memset(arr, 0, sizeof(arr));
	}
}
