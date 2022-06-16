#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(void)
{
	int N, num;
	vector<int> v;
	vector<int> a;
	stack<int> s;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
	}
	for (int i = N - 1; i >= 0; i--)
	{
		while (!s.empty() && s.top() <= v[i])
			s.pop();
		if (s.empty())
			a.push_back(-1);
		else
			a.push_back(s.top());
		s.push(v[i]);
	}
	for (int i = N - 1; i >= 0; i--)
		cout << a[i] << " ";
	cout << '\n';
}
