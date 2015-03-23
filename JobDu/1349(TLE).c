#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int n, m, k, i, j, times;
	int *array;
	while(scanf("%d", &n) != EOF)
	{
		array = (int *)malloc(n * sizeof(int));
		for(i = 0;i < n;i++)
			scanf("%d", &array[i]);
		scanf("%d", &m);
		for(i = 0;i < m;i++)
		{
			times = 0;
			scanf("%d", &k);
			for(j = 0;j < n;j++)
				if(array[j] == k)
					times++;
			printf("%d\n", times);
		}
		free(array);
	}
	return 0;
}