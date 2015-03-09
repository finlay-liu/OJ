#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// freopen("sample.txt", "r", stdin);

int getSum(int array[], int len)
{
	int sum = 0;
	int i;
	for(i = 0;i < len;i++)
		sum += array[i];
	return sum;
}

int getMaxIndex(int array[], int len)
{
	int i, max;
	max = 0;
	for(i = 0;i < len;i++)
		if(array[i] > array[max])
			max = i;
	return max;
}

int main()
{
	int array[150][150], m, n, i, j;
	while(scanf("%d%d", &m, &n) != EOF)
	{
		for(i = 0;i < m;i++)
			for(j = 0;j < n;j++)
				scanf("%d", &array[i][j]);

		for(i = 0;i < m;i++)
		{
			j = getMaxIndex(array[i], n);
			array[i][j] = getSum(array[i], n);
		}
		for(i = 0;i < m;i++)
		{
			printf("%d", array[i][0]);
			for(j = 1;j < n;j++)
			{
				printf(" %d", array[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}