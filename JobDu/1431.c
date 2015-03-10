#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// freopen("sample.txt", "r", stdin);

int cmp(const void *a, const void *b)
{
	return *(int *)b > *(int *)a ? 1 : -1;
}

int main()
{
	int n, m, i;
	int *array;
	while(scanf("%d%d", &n, &m) != EOF)
	{
		array = (int *)malloc(n * sizeof(int));
		for(i = 0;i < n;i++)
			scanf("%d", &array[i]);
		qsort(array, n, sizeof(int), cmp);
		printf("%d", array[0]);
		for(i = 1;i < m;i++)
			printf(" %d", array[i]);
		printf("\n");
	}
	return 0;
}