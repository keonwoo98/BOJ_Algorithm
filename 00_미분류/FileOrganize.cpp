#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, cnt, i;
	string file;
	vector<string> v;
	vector< pair<string, int> > dict;

	cin >> N;
	while (N--)
	{
		cin >> file;
		file.erase(0, file.find('.') + 1);
		v.push_back(file);
	}
	sort(v.begin(), v.end());
	cnt = 1;
	file = v[0];
	for (i = 1; i < v.size(); i++)
	{
		if (file == v[i])
			cnt++;
		else
		{
			dict.push_back(make_pair(v[i - 1], cnt));
			cnt = 1;
			file = v[i];
		}
	}
	dict.push_back(make_pair(v[i - 1], cnt));
	for (i = 0; i < dict.size(); i++)
		cout << dict[i].first << " " << dict[i].second << '\n';
}
