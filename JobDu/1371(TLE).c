#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int cmp(const void *a, const void *b)
{
	return *(int *)a > *(int *)b ? 1 : -1;
}

int main()
{
	int n, k, i;
	int *array;
	while(scanf("%d%d", &n, &k) != EOF)
	{
		array = (int *)malloc(n * sizeof(int));
		for(i = 0;i < n;i++)
			scanf("%d", &array[i]);
		qsort(array, n, sizeof(int), cmp);
		printf("%d", array[0]);
		for(i = 1; i < k;i++)
			printf(" %d", array[i]);
		printf("\n");
		free(array);
	}
	return 0;
}