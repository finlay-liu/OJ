#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int cmp(const void *a, const void *b)
{
	return *(int *)a > *(int *)b ? 1 : -1;
}

// freopen("sample.txt", "r", stdin);
int main()
{
	int n, i, sum;
	int *array;
	while(scanf("%d", &n) != EOF)
	{
		array = (int *)malloc(n * sizeof(int));
		for(i = 0;i < n;i++)
			scanf("%d", &array[i]);
		qsort(array, n, sizeof(int), cmp);
		
		sum = 0;
		for(i = 0;i < n - 1;i++)
		{
			sum += (array[i] + array[i + 1]);
			array[i + 1] = sum;
		}
		// sum += array[n - 1];
		printf("%d\n", sum);
		free(array);
	}
	return 0;
}