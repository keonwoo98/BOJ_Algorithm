#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	int T, N, cnt;
	string str1, str2;
	vector< pair<string, string> > v;

	cin >> T;
	while (T--)
	{
		cnt = 0;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> str1 >> str2;
			v.push_back(pair<string, string>(str1, str2));
		}
	}
}
