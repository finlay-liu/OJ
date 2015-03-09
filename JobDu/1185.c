#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// freopen("sample.txt", "r", stdin);

int cmp(const void *a, const void *b)
{
	return *(int *)a > *(int *)b ? 1 : -1;
}

int main()
{
	int n, i;
	int *array;
	while(scanf("%d", &n) != EOF)
	{
		array = (int *)malloc(n * sizeof(int));
		for(i = 0;i < n;i++)
			scanf("%d",&array[i]);

		if(n == 1)
		{
			printf("%d\n",array[0]);
			printf("-1\n");
		}
		else
		{
			qsort(array, n, sizeof(int), cmp);
			printf("%d\n",array[n - 1]);
			if(n == 2)
				printf("%d\n", array[0]);
			else
			{
				printf("%d", array[0]);
				for(i = 1;i < n - 1;i++)
					printf(" %d", array[i]);
				printf("\n");
			}
		}
	}
	return 0;
}