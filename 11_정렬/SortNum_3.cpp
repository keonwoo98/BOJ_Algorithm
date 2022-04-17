#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	int N, num;
	int i, j;
	int arr[10001] = { 0, };

	cin >> N;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		arr[num]++;
	}
	for (i = 0; i < 10001; i++)
	{
		while (arr[i]--)
			printf("%d\n", i);
	}
}
