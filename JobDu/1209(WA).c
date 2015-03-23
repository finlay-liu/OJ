#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int M, N, i, time;
	int *array;
	while(scanf("%d", &M) != EOF)
	{
		scanf("%d", &N);
		array = (int *)malloc(N * sizeof(int));
		for(i = 0;i < N;i++)
			scanf("%d", &array[i]);
		time = 0;
		N--;
		while(M > 0 && N >= 0)
		{
			if(M >= array[N])
			{
				M -= array[N];
				time++;
			}
			N--;
		}
		if(time != 0)
			printf("%d\n", time);
		else
			printf("0\n");
		free(array);
	}
	return 0;
}