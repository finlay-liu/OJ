#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int main()
{
	int n, m, i, j, flag, min;
	int *array1, *array2;
	while(scanf("%d%d", &n, &m) != EOF)
	{
		if(n == 0 && m == 0)
		{
			printf("NULL\n");
			break;
		}
		array1 = malloc(n * sizeof(int));
		array2 = malloc(m * sizeof(int));
		for(i = 0;i < n;i++)
			scanf("%d", &array1[i]);
		for(i = 0;i < m;i++)
			scanf("%d", &array2[i]);

		i = j = 0;
		flag = 0;
		while(i < n || j < m)
		{
			if(i < n && j < m)
			{
				if(array1[i] > array2[j])
				{
					if(!flag)
					{
						printf("%d", array2[j]);
						flag = 1;
					}
					else
						printf(" %d", array2[j]);
					j++;
				}
				else
				{
					if(!flag)
					{
						printf("%d", array1[i]);
						flag = 1;
					}
					else
						printf(" %d", array1[i]);
					i++;
				}
			}
			else if(i == n && j != m)
			{
				printf(" %d", array2[j]);
				j++;
			}
			else if(i != n && j == m)
			{
				printf(" %d", array1[i]);
				i++;
			}
		}
		printf("\n");
		free(array1);
		free(array2);
	}
	return 0;
}