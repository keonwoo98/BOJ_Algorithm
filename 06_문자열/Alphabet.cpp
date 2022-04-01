#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void)
{
	string s;
	int arr[26];

	memset(arr, -1, sizeof(arr));

	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (arr[s[i] - 'a'] == -1)
			arr[s[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++)
		cout << arr[i] << " ";
	cout << endl;
}
