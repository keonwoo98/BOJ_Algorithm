#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main(void)
{
	int N, S, max, flag;
	int *A, *B, *C;

	cin >> N;
	A = new int[N];
	B = new int[N];
	C = new int[N];
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++)
		cin >> B[i];
	bzero(C, N);
	sort(A, A + N);
	S = 0;
	for (int i = 0; i < N; i++)
	{
		max = 0;
		flag = 0;
		for (int i = 0; i < N; i++)
		{
			if (max < B[i] && C[i] == 0)
			{
				max = B[i];
				flag = i;
			}
		}
		C[flag] = 1;
		S += A[i] * max;
	}
	cout << S << endl;
	delete []A;
	delete []B;
	delete []C;
}
