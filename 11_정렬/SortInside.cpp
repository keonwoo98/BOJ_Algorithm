#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int num, cpy, cnt;
	int *arr;

	cin >> num;
	cpy = num;
	cnt = 0;
	while (cpy)
	{
		cpy /= 10;
		cnt++;
	}
	arr = new int[cnt];
	for (int i = 0; i < cnt; i++)
	{
		arr[i] = num % 10;
		num /= 10;
	}
	sort(arr, arr + cnt);
	while (cnt--)
		cout << arr[cnt];
	cout << endl;
	delete []arr;
}
