#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n, cnt;

	cin >> n;
	string str[n];
	int sum[n];
	for (int i = 0; i < n; i++)
		cin >> str[i];
	for (int i = 0; i < n; i++)
	{
		cnt = 0;
		sum[i] = 0;
		for (int j = 0; j < str[i].length(); j++)
		{
			if (str[i][j] == 'O')
				cnt++;
			else
				cnt= 0;
			sum[i] += cnt;
		}
	}
	for (int i = 0; i < n; i++)
		cout << sum[i] << endl;
}
