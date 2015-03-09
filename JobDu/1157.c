// http://ac.jobdu.com/problem.php?pid=1157
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int *)a > *(int *)b ? 1 : -1;
}

int main()
{
	int N, i;
	int *array;
	while(scanf("%d", &N) != EOF)
	{
		if(N == 0)
			return 0;
		array = (int *)malloc(N * sizeof(int));
		for(i = 0;i < N;i++)
			scanf("%d", &array[i]);
		qsort(array, N, sizeof(int), cmp);
		if(N % 2 == 0)
			printf("%d\n", (array[N / 2] + array[N / 2 - 1]) / 2);
		else
			printf("%d\n", array[N / 2]);
		free(array);
	}
	return 0;
}