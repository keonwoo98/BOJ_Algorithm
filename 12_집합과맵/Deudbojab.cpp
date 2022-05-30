#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	string str;
	set<string> s;
	vector<string> v;

	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		s.insert(str);
	}
	for (int i = 0; i < M; ++i)
	{
		cin >> str;
		if (s.find(str) != s.end())
			v.push_back(str);
	}
	sort(v.begin(), v.end());
	cout << v.size() << '\n';
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}
