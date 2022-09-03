#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int N, L, D, bell;
	vector<bool> v;

	cin >> N >> L >> D;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < L; j++)
			v.push_back(true);
		for (int j = 0; j < 5; j++)
			v.push_back(false);
	}
	bell = 0;
	while (1)
	{
		if (bell > v.size())
			break ;
		else if (!v[bell])
			break ;
		else
			bell += D;
	}
	cout << bell << '\n';
}
