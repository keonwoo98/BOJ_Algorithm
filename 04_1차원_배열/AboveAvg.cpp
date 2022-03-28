#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	int n1, n2;
	int sum, rate;
	double avg;

	cin >> n1;
	double per[n1];
	for (int i = 0; i < n1; i++)
	{
		cin >> n2;
		int score[n2];
		sum = 0;
		avg = 0;
		rate = 0;
		for (int j = 0; j < n2; j++)
		{
			cin >> score[j];
			sum += score[j];
		}
		avg = sum / n2;
		for (int j = 0; j < n2; j++)
		{	
			if (avg < score[j])
				rate++;
		}
		per[i] = (double)rate / (double)n2 * 100;
	}
	for (int i = 0; i < n1; i++)
		printf("%.3f%%\n", per[i]);
}
