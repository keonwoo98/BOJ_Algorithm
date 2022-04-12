#include <iostream>
using namespace std;

void print_star(int i, int j, int N)
{
	if ((i / N) % 3 == 1 && (j / N) % 3 == 1)
		cout << " ";
	else
	{
		if (N / 3 == 0)
			cout << "*";
		else
			print_star(i, j, N / 3);
	}
}

int main(void)
{
	int N;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			print_star(i, j, N);
		cout << endl;
	}
}
