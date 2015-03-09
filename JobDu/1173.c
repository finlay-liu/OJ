// http://ac.jobdu.com/problem.php?pid=1173
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n, m, i, j, tmp, flag;
	int *array;
	while(scanf("%d", &n) != EOF)
	{
		array = (int *)malloc(n * sizeof(int));
		for(i = 0;i < n;i++)
			scanf("%d", &array[i]);
		scanf("%d", &m);
		for(i = 0;i < m;i++)
		{
			scanf("%d", &tmp);
			flag = 0;
			for(j = 0;j < n;j++)
			{
				if(tmp == array[j])
				{
					printf("YES\n");
					flag = 1;
				}
			}
			if(!flag)
				printf("NO\n");
		}
		free(array);
	}
	return 0;
}