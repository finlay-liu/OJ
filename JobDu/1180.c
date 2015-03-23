#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int N, i, j, flag;
	int array[110][110];
	while(scanf("%d", &N) != EOF)
	{
		for(i = 0;i < N; i++)
			for(j = 0;j < N; j++)
				scanf("%d", &array[i][j]);
		flag = 1;
		for(i = 0;i < N; i++)
		{
			for(j = 0;j < N; j++)
			{
				if(i == j)
					continue;
				if(array[i][j] != array[j][i])
					flag = 0;
			}
		}
		if(flag)
			printf("Yes!\n");
		else
			printf("No!\n");
	}
	return 0;
}