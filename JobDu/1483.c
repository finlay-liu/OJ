#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int N, max, min, i;
	int *array;
	while(scanf("%d", &N) != EOF)
	{
		array = (int *)malloc(N * sizeof(int));
		for(i = 0; i < N;i++)
			scanf("%d", &array[i]);

		max = min = array[0];
		for(i = 0; i < N;i++)
		{
			if(max <= array[i])
				max = array[i];
			if(min >= array[i])
				min = array[i];
		}
		printf("%d %d\n", max, min);
	}
	return 0;
}