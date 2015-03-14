#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int main()
{
	int N, M, i, j, tmp;
	int array1[250], array2[250][250];
	while(scanf("%d%d", &N, &M) != EOF)
	{
		memset(array2, 0, 250 * 250);
		for(i = 0;i < N;i++)
		{
			scanf("%d", &tmp);
			array1[i] = tmp;
			j = 0;
			while(array2[tmp][j] != 0)
				j++;
			array2[tmp][j] = 1;
		}
		for(i = 0;i < N;i++)
		{
			j = tmp = 0;
			while(array2[array1[i]][j] != 0)
			{
				tmp++;
				j++;
			}
			if(tmp == 1)
				printf("BeiJu\n");
			else
				printf("%d\n", tmp - 1);
		}
	}
	return 0;
}