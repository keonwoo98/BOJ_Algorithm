#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	int T, N, cnt, flag, size;
	string str1, str2;
	vector< pair<string, string> > v;
	vector< pair<string, int> > w;

	cin >> T;
	while (T--)
	{
		cnt = 1;
		size = 0;
		v.clear();
		w.clear();
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> str1 >> str2;
			v.push_back(pair<string, string>(str1, str2));
			if (i == 0)
			{
				w.push_back(pair<string, int>(str2, 1));
				size++;
			}
			else
			{
				flag = 0;
				for (int j = 0; j < size; j++)
				{
					if (w[j].first == str2)
					{
						flag = 1;
						w[j].second++;
						break ;
					}
				}
				if (!flag)
				{
					w.push_back(pair<string, int>(str2, 1));
					size++;
				}
			}
		}
		for (int i = 0; i < size; i++)
			cnt *= w[i].second + 1;
		cout << cnt - 1 << '\n';
	}
}
