// http://ac.jobdu.com/problem.php?pid=1041
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a , const void *b)
{
    return *(int *)a > *(int *)b ? 1 : -1;
}

int main()
{
	int n, i, tmp;
	int *array;
	while(scanf("%d",&n) != EOF)
	{
		array = (int *)malloc(n * sizeof(int));
		for(i = 0;i < n; i++)
			scanf("%d",&array[i]);
		qsort(array, n, sizeof(int), cmp);
		printf("%d",array[0]);
		tmp = array[0];
		for(i = 1;i < n; i++)
		{
			if(tmp != array[i])
			{
				tmp = array[i];
				printf(" %d",array[i]);
			}
			else
				continue;
		}
		printf("\n");
		free(array);
	}
	return 0;
}