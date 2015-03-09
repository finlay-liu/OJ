#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// freopen("sample.txt", "r", stdin);

int cmp(const void *a, const void *b)
{
	return *(int *)a > *(int *)b ? 1 : -1;
}

int main()
{
	int n, i, j, k;
	int array[4][5];
	int max1[5], max2[5], max[4];
	while(scanf("%d", &n) != EOF)
	{
		for(k = 0;k < n;k++)
		{
			for(i = 0;i < 4;i++)
			for(j = 0;j < 5;j++)
				scanf("%d", &array[i][j]);
		
			for(i = 0;i < 5;i++)
			{
				max[0] = array[0][i];
				max[1] = array[1][i];
				max[2] = array[2][i];
				max[3] = array[3][i];
				qsort(max, 4, sizeof(int), cmp);
				max1[i] = max[3];
				max2[i] = max[2];
			}
			printf("%d %d %d %d %d\n", max1[0], max1[1], max1[2], max1[3], max1[4]);
			printf("%d %d %d %d %d\n", max2[0], max2[1], max2[2], max2[3], max2[4]);
		}
	}
	return 0;
}