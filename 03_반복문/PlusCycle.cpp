#include <iostream>
using namespace std;

int main(void)
{
	int num, cnt;
	int t, o;
	int cycle, temp, new_num;

	cnt = 0;
	cin >> num;
	cycle = -1;
	if (num < 10)
		num *= 10;
	temp = num;
	while (num != cycle)
	{
		t = temp / 10;
		o = temp % 10;
		new_num = t + o;
		if (new_num > 9)
			new_num %= 10;
		cycle = o * 10 + new_num;
		temp = cycle;
		cnt++;
	}
	cout << cnt << endl;
}
