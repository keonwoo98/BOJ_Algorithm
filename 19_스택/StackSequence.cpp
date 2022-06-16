#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main(void)
{
	int N, num;
	stack<int> s1;
	stack<int> s2;
	stack<int> s3;
	stack<int> input;
	vector<char> ans;

	cin >> N;
	for (int i = N; i > 0; i--)
		s1.push(i);
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		input.push(num);
		while (!s1.empty() && s1.top() <= num)
		{
			s2.push(s1.top());
			s1.pop();
			ans.push_back('+');
		}
		while (!s2.empty() && s2.top() >= num)
		{
			s3.push(s2.top());
			s2.pop();
			ans.push_back('-');
		}
	}
	while (N--)
	{
		if (input.top() != s3.top())
		{
			cout << "NO" << '\n';
			return 0;
		}
		input.pop();
		s3.pop();
	}
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << '\n';
}
