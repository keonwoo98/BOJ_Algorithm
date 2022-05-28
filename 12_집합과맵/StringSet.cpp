#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void)
{
	int N, M;
	int i, j, cnt;
	string str;
	set<string> s;

	cin >> N >> M;
	while (N--)
	{
		cin >> str;
		s.insert(str);
	}
	cnt = 0;
	while (M--)
	{
		cin >> str;
		if (s.find(str) != s.end())
			cnt++;
	}
	cout << cnt << endl;
}
