#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int n, i;
	int *array1, *array2;
	while(scanf("%d", &n) != EOF)
	{
		array1 = (int *)malloc(n * sizeof(int));
		array2 = (int *)malloc(n * sizeof(int));
		for(i = 0;i < n; i++)
			scanf("%d", &array1[i]);
		for(i = 0;i < n; i++)
			scanf("%d", &array2[i]);
		for(i = 0;i < n; i++)
		{
			if(array2[i] != 0)
				printf("%d %d\n", array1[i], array1[array2[i] - 1]);
			else
				printf("%d 0\n", array1[i]);
		}

		free(array1);
		free(array2);
	}
	return 0;
}