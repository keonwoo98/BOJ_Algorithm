#include <iostream>
#include <string>
using namespace std;

int arr[26][200000];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string S;
	char c;
	int q, l, r;
	
	cin >> S;
	cin >> q;
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < S.length(); j++)
			arr[i][j] = (j == 0 ? 0 : arr[i][j - 1]) + (i + 'a' == S[j] ? 1 : 0);
	}
	while (q--)
	{
		cin >> c >> l >> r;
		cout << arr[c - 'a'][r] - (l == 0 ? 0 : arr[c - 'a'][l - 1]) << '\n';
	}
}
