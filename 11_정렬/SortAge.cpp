#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
	int age;
	int index;
	string name;
}s;

int compare(s a, s b)
{
	if (a.age == b.age)
		return a.index < b.index;
	else
		return a.age < b.age;
}

int main(void)
{
	int N, age;
	string name;
	vector<s> v;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> age >> name;
		s info = {age, i, name};
		v.push_back(info);
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < N; i++)
		cout << v[i].age << ' ' << v[i].name << '\n';
}
