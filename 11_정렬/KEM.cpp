#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
	string name;
	int korean;
	int english;
	int math;
}s;

int compare(s a, s b)
{
	if (a.korean == b.korean)
	{
		if (a.english == b.english)
		{
			if (a.math == b.math)
			{
				int i = 0;
				while (i < a.name.length() && i < b.name.length())
				{
					if (a.name[i] == b.name[i])
						i++;
					else
						return a.name[i] < b.name[i];
				}
			}
			return a.math > b.math;
		}
		return a.english < b.english;
	}
	return a.korean > b.korean;
}

int main(void)
{
	int N, k, e, m;
	string name;
	vector<s> v;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> name >> k >> e >> m;
		s info = { name, k, e, m };
		v.push_back(info);
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < N; i++)
		cout << v[i].name << '\n';
}
