#include <iostream>
using namespace std;

int main(void)
{
	int S1, S2, S3, max, res;
	int arr[81] = { 0, };

	cin >> S1 >> S2 >> S3;
	for (int i = 1; i <= S1; i++)
	{
		for (int j = 1; j <= S2; j++)
		{
			for (int k = 1; k <= S3; k++)
				arr[i + j + k]++;
		}
	}
	max = res = 0;
	for (int i = 1; i <= 80; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			res = i;
		}
	}
	cout << res << '\n';
}
