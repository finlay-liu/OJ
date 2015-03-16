#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int m, n, i, j, flag;
	int *array;
	while(scanf("%d", &m) != EOF)
	{
		for(i = 0;i < m;i++)
		{
			flag = 0;
			scanf("%d", &n);
			array = (int *)malloc(n * sizeof(int));
			for(j = 0;j < n;j++)
				scanf("%d", &array[j]);
			if(array[0] > array[1] || array[0] < array[1])
			{
				printf("0");
				flag = 1;
			}
			for(j = 1;j < n - 1;j++)
			{
				if( (array[j] > array[j - 1] && array[j] > array[j + 1]) || (array[j] < array[j - 1] && array[j] < array[j + 1]) )
				{
					if(flag)
						printf(" %d", j);
					else
					{
						printf("%d", j);
						flag = 1;
					}
				}
			}
			if(array[n - 1] > array[n - 2] || array[n - 1] < array[n - 2])
			{
				if(flag)
					printf(" %d", n - 1);
				else
					printf("%d", n - 1);
			}
			printf("\n");
		}
	}
	return 0;
}