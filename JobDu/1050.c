// http://ac.jobdu.com/problem.php?pid=1050
#include <stdio.h>
#include <stdlib.h>

int WanNum(int n)
{
	int i, tmp = 0;
	for(i = 1;i < n;i++)
		if(n % i == 0)
			tmp += i;
	if(tmp == n)
		return 1;
	else
		return 0;
}

int main()
{
	int n , i, flag;
	while(scanf("%d",&n) != EOF)
	{
		flag = 0;
		for(i = 1; i <= n; i++)
		{
			if(WanNum(i))
			{
				if(!flag)
				{
					printf("%d",i);
					flag = 1;
				}
				else
					printf(" %d",i);
			}
		}
		printf("\n");
	}
}