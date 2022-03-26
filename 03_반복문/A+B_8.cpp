#include <iostream>
using namespace std;

int main(void)
{
	int cnt;
	int **num;
	int i;

	cin >> cnt;
	num = new int*[cnt];
	i = -1;
	while (++i < cnt)
		num[i] = new int[2];
	i = -1;
	while (++i < cnt)
		cin >> num[i][0] >> num[i][1];
	i = -1;
	while (++i < cnt)
	{
		cout << "Case #" << i + 1 << ": ";
		cout << num[i][0] << " + " << num[i][1];
		cout << " = " << num[i][0] + num[i][1] << endl;
		delete num[i];
	}
	delete []num;
}
