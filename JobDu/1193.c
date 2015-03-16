#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int N, i, j, tmp;
	int array[150][150];
	while(scanf("%d", &N) != EOF)
	{
		for(i = 0;i < N;i++)
			for(j = 0;j < N;j++)
				scanf("%d", &array[i][j]);

		for(i = 0;i < N;i++)
		{
			for(j = i;j < N;j++)
			{
				if(i == j)
					continue;

				tmp = array[i][j];
				array[i][j] = array[j][i];
				array[j][i] = tmp;
			}
		}
		for(i = 0;i < N;i++)
		{
			printf("%d", array[i][0]);
			for(j = 1;j < N;j++)
				printf(" %d", array[i][j]);
			printf("\n");
		}
	}
	return 0;
}