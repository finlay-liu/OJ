// http://ac.jobdu.com/problem.php?pid=1174
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
	return *(int *)a > *(int *)b ? 1 : -1;
}

int main()
{
	int k, index, i, j, tmp;
	int *array;
	while(scanf("%d", &k) != EOF)
	{
		array = (int *)malloc(k * sizeof(int));
		for(i = 0;i < k;i++)
			scanf("%d", &array[i]);
		qsort(array, k, sizeof(int), cmp);

		scanf("%d", &index);
		j = 0;
		tmp = array[0] - 1;
		for(i = 0;i < k;i++)
		{
			if(tmp == array[i])
				continue;
			else
			{
				tmp = array[i];
				j++;
			}

			if(j == index)
				printf("%d\n", array[i]);
		}
		free(array);
	}
	return 0;
}