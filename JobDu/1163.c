// http://ac.jobdu.com/problem.php?pid=1163
// http://ac.jobdu.com/problem.php?pid=1163
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int su(int n)
{
	int i, j, flag;
	flag = 1;
	j = (int)sqrt(n);
	for(i = 2; i <= j;i++)
		if(n % i == 0)
			flag = 0;
	return flag;
}

int main()
{
	int i,index = 0, n, flag;
	int susu[1500];
	for(i = 2;i <= 10000;i++)
	{
		if(su(i) && i % 10 == 1)
		{
			susu[index] = i;
			index++;
		}
	}
	while(scanf("%d", &n) != EOF)
	{
		flag = -1;

		if(susu[0] >= n)
		{
			printf("-1\n");
			continue;
		}

		for(i = 0;i < index;i++)
		{
			if(susu[i] < n)
			{
				if(flag == -1)
				{
					printf("%d", susu[i]);
					flag = 1;
				}
				else
					printf(" %d", susu[i]);
			}
		}
		printf("\n");
	}
	return 0;
}


