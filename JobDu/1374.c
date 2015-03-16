#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int main()
{
	int n, i;
	int array[101], tmp;
	while(scanf("%d", &n) != EOF)
	{
		memset(array , 0, sizeof(array));
		for(i = 0;i < n;i++)
		{
			scanf("%d", &tmp);
			array[tmp]++;
		}
		for(i = 0;i < 101;i++)
		{
			while(array[i] > 0)
			{
				printf("%d ",i);
				array[i]--;
			}
		}
		printf("\n");
		//free(array);
	}	
	return 0;
}