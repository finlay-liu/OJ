#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int times[1000001];

int main()
{
	int n, i, tmp, flag;

	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < 1000001; i++)
			times[i] = 0;

		for (i = 0; i < n; i++)
		{
			scanf("%d", &tmp);
			times[tmp]++;
		}

		flag = 0;
		for (i = 0; i < 1000001; i++)
		{
			if (times[i] == 1 && flag == 0)
			{
				printf("%d", i);
				flag = 1;
			}
			else if (times[i] == 1)
				printf(" %d", i);
		}
		if (flag == 0)
			printf("0\n");
		else
			printf("\n");
	}
}