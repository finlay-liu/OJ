#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int cmp(const void *a, const void *b)
{
	return *(int *)a > *(int *)b ? 1 : -1;
}

int main()
{
	int n, i, tmp, len1, len2;
	int array1[100000], array2[100000];
	while(scanf("%d", &n) != EOF)
	{
		len1 = len2 = 0;
		for(i = 0;i < n;i++)
		{
			scanf("%d", &tmp);
			if(tmp % 2 == 1)
			{
				array1[len1] = tmp;
				len1++;
			}
			else
			{
				array2[len2] = tmp;
				len2++;
			}
		}
		if(len1 != 0 && len2 != 0)
		{
			printf("%d",array1[0]);
			for(i = 1;i < len1;i++)
				printf(" %d", array1[i]);
			for(i = 0;i < len2;i++)
				printf(" %d", array2[i]);
			printf("\n");
		}
		else if(len1 == 0 && len2 != 0)
		{
			printf("%d",array2[0]);
			for(i = 1;i < len2;i++)
				printf(" %d", array2[i]);
			printf("\n");
		}
		else if(len1 != 0 && len2 == 0)
		{
			printf("%d",array1[0]);
			for(i = 1;i < len1;i++)
				printf(" %d", array1[i]);
			printf("\n");
		}
	}
	return 0;
}