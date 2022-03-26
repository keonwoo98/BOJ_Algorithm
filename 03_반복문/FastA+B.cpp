#include <stdio.h>

int main(void)
{
	int cnt;
	int **num;
	int i;

	scanf("%d", &cnt);
	num = new int*[cnt];
	i = -1;
	while (++i < cnt)
		num[i] = new int[2];
	i = -1;
	while (++i < cnt)
		scanf("%d %d", &num[i][0], &num[i][1]);
	i = -1;
	while (++i < cnt)
	{
		printf("%d\n", num[i][0] + num[i][1]);
		delete num[i];
	}
	delete []num;
}
