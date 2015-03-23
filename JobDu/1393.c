#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int main()
{
	int n, i, j, flag;
	int *array1, *array2;
	while(scanf("%d", &n) != EOF)
	{
		array1 = (int *)malloc(n * sizeof(int));
		array2 = (int *)malloc(n * sizeof(int));
		for(i = 0;i < n;i++)
			scanf("%d", &array1[i]);
		for(i = 0;i < n;i++)
			scanf("%d", &array2[i]);
		i = j = 0;
		flag = 0;
		while(i < n || j < n)
		{
			if(i < n && j < n)
			{
				if(flag == 0)
				{
					if(array1[i] > array2[j])
					{
						printf("%d", array2[j]);
						j++;
						flag = 1;
					}
					else
					{
						printf("%d", array1[j]);
						i++;
						flag = 1;
					}
				}
				else
				{
					if(array1[i] > array2[j])
					{
						printf(" %d", array2[j]);
						j++;
						flag = 1;
					}
					else
					{
						printf(" %d", array1[i]);
						i++;
						flag = 1;
					}
				}
			}
			else if(i == n)
			{
				printf(" %d", array2[j]);
				j++;
			}
			else if(j == n)
			{
				printf(" %d", array1[i]);
				i++;
			}
		}
		printf("\n");
	}
	return 0;
}