#include <iostream>
using namespace std;

int main(void)
{

	int n;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = n; i > 0; i--)
		cout << i << '\n';
}
