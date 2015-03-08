// http://ac.jobdu.com/problem.php?pid=1117
#include <stdio.h>
#include <stdlib.h>

int cmp1(const void *a, const void *b)
{
	return *(int *)a - *(int *)b; 
}

int cmp2(const void *a, const void *b)
{
	return *(int *)b - *(int *)a; 
}


int main()
{
	int num[10], num1[10], num2[10], len1, len2, i;
	while(scanf("%d",&num[0]) != EOF)
	{
		memset(num1, -1, 10 * sizeof(int));
		memset(num2, -1, 10 * sizeof(int));

		for(i = 1; i < 10;i++)
			scanf("%d",&num[i]);

		len1 = len2 = 0;
		for(i = 0;i < 10;i++)
		{
			if(num[i] % 2 == 0)
			{
				num2[len2] = num[i];
				len2++;
			}
			else
			{
				num1[len1] = num[i];
				len1++;
			}
		}

		qsort(num1 , len1, sizeof(int), cmp2);
		qsort(num2 , len2, sizeof(int), cmp1);

		for(i = 0;i < len1;i++)
		{
			if(i == len1 - 1 && len2 == 0)
				printf("%d", num1[i]);
			else
				printf("%d ", num1[i]);
		}
		if(len2 != 0)
		{
			for(i = 0;i < len2;i++)
			{
				if(i == len2 - 1)
					printf("%d\n", num2[i]);
				else
					printf("%d ", num2[i]);
			}
		}
		else
			printf("\n");
	}
	//system("pause");
	return 0;
}