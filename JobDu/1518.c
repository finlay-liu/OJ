#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int n, i;
	int *array;
	while(scanf("%d", &n) != EOF)
	{
		if(n == 0)
		{
			printf("NULL\n");
		}
		else
		{
			array = (int *)malloc(n * sizeof(int));
			for(i = 0;i < n;i++)
				scanf("%d", &array[i]);

			printf("%d", array[n - 1]);
			for(i = n - 2;i >= 0;i--)
				printf(" %d", array[i]);
			printf("\n");
		}
		
	}
	return 0;
}