#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	int n, max;
	int *arr;
	double avg;

	max = 0;
	avg = 0;
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (max < arr[i])
			max = arr[i];
		avg += arr[i];
	}
	avg = avg / max * 100 / n;
	printf("%f\n", avg);
	delete []arr;
}
