// #include <iostream>
// #include <vector>
// using namespace std;

// int main(void)
// {
// 	int K, num, sum;
// 	vector<int> v;

// 	cin >> K;
// 	while (K--)
// 	{
// 		cin >> num;
// 		if (!num)
// 			v.pop_back();
// 		else
// 			v.push_back(num);
// 	}
// 	sum = 0;
// 	for (int i = 0; i < v.size(); i++)
// 		sum += v[i];
// 	cout << sum << endl;
// }


#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	int K, num, sum;
	stack<int> s;

	cin >> K;
	while (K--)
	{
		cin >> num;
		if (!num)
			s.pop();
		else
			s.push(num);
	}
	sum = 0;
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}
	cout << sum << endl;
}
