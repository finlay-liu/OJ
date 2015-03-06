// http://ac.jobdu.com/problem.php?pid=1040
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int PrimeNum(int n)
{
	int i, j,flag;
	flag = 1;
	j = (int)sqrt(n);
	for(i = 2;i <= j; i++)
		if(n % i == 0)
			flag = 0;
	return flag;
}

int main()
{
	int num[10000];
	int index, i, n;
	index = 0;
	for(i = 2; ; i++)
	{
		if(index <= 10000)
		{	
			if(PrimeNum(i))
			{
				num[index] = i;
				//printf("index : %d %d\n", index, num[index]);
				index++;
			}
		}
		else
			break;
	}
	while(scanf("%d",&n)!= EOF)
	{
		printf("%d\n",num[n - 1]);
	}
	
	return 0;
}