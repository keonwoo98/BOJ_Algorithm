#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int mua, temp, index;
	string s;
	int arr[26] = { 0 };

	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] > 'Z')
			arr[s[i] - 'a'] += 1;
		else
			arr[s[i] - 'A'] += 1;
	}
	index = 0;
	mua = 0;
	temp = 0;
	for (int i = 0; i < 26; i++)
	{
		if (mua < arr[i])
		{
			mua = arr[i];
			index = i;
		}
		else if (mua == arr[i] && mua != 0)
			temp = arr[i];
	}
	if (mua == temp)
		cout << "?" << endl;
	else
		cout << (char)(index + 'A') << endl;
}
