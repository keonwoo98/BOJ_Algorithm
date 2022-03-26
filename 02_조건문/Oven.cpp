#include <iostream>
using namespace std;

int main(void)
{
	int h, m, t;

	scanf("%d %d", &h, &m);
	scanf("%d", &t);
	if (m + t < 60)
		m += t;
	else
	{
		m = m + t - 60;
		if (h == 23)
			h = 0;
		else
			h++;
		while (m >= 60)
		{
			if (h == 23)
				h = 0;
			else
				h++;
			m -= 60;
		}
	}
	cout << h << " " << m << endl;


	// int a, b, c;
	// scanf("%d %d %d", &a, &b, &c);
	// printf("%d %d", (a + (b + c) / 60) % 24, (b + c) % 60);
}
