// http://ac.jobdu.com/problem.php?pid=1060
#include <stdio.h>

int YinNum(int n)
{
	int tmp, i;
	tmp = 0;
	for(i = 1;i < n; i++)
		if(n % i ==0)
			tmp += i;
	return tmp;
}

int main()
{
	int i, Elen, Glen;
	int E[60], G[60];
	Elen = Glen = 0;
	for(i = 2;i <=60; i++)
	{
		if(YinNum(i) == i)
		{
			E[Elen] = i;
			Elen++;
		}
		else if(YinNum(i) > i)
		{
			G[Glen] = i;
			Glen++;
		}
	}
	printf("E:");
	for(i = 0; i < Elen; i++)
		printf(" %d",E[i]);
	printf("\n");
	
	printf("G:");
	for(i = 0; i < Glen; i++)
		printf(" %d",G[i]);
	printf("\n");

	return 0;
}