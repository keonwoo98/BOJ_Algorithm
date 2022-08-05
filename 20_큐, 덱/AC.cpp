#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string input, char delimiter)
{
	vector<string> result;
	stringstream ss(input);
	string temp;

	while (getline(ss, temp, delimiter))
		result.push_back(temp);
	return result;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, n;
	bool flag, error;
	string func, arr;
	deque<int> dq;
	vector<string> v;

	cin >> T;
	while (T--)
	{
		flag = false;
		error = false;
		cin >> func >> n >> arr;
		arr = arr.substr(1, arr.length() - 2);
		v = split(arr, ',');
		for (int i = 0; i < n; i++)
			dq.push_back(stoi(v[i]));
		for (int i = 0; i < func.size(); i++)
		{
			if (func[i] == 'R')
				flag = !flag;
			else if (func[i] == 'D')
			{
				if (dq.empty())
				{
					error = true;
					cout << "error\n";
					break ;
				}
				else
				{
					if (flag)
						dq.pop_back();
					else
						dq.pop_front();
				}
			}
		}
		if (!dq.empty())
		{
			cout << '[';
			if (flag)
			{
				for (int i = dq.size() - 1; i > 0; i--)
					cout << dq[i] << ',';
				cout << dq[0] << "]\n";
			}
			else
			{
				for (int i = 0; i < dq.size() - 1; i++)
					cout << dq[i] << ',';
				cout << dq[dq.size() - 1] << "]\n";
			}
		}
		if (dq.empty() && !error)
			cout << "[]\n";
		dq.clear();
	}
}
