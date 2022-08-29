#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int x, y;
	long sum;
	string A, B;

	cin >> A >> B;
	sum = 0;
	for (int i = 0; i < A.length(); i++)
	{
		for (int j = 0; j < B.length(); j++)
			sum += (A[i] - '0') * (B[j] - '0');
	}
	cout << sum << '\n';
}
