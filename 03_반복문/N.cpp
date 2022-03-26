#include <stdio.h>

int main(void)
{
	int n;
	int i;

	scanf("%d", &n);
	i = 0;
	while (++i <= n)
		printf("%d\n", i);
}
