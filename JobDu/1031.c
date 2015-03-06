// http://ac.jobdu.com/problem.php?pid=1031
#include <stdio.h>
#include <stdlib.h>

int xxx(int n)
{
	if(n % 2 == 0)
		return n / 2;
	else
		return (3 * n + 1) / 2;
}

int main()
{
	int n, i;
	while(scanf("%d",&n) != EOF)
	{
		if(n == 0)
			return 0;
		
		i = 0;
		while(n != 1)
		{
			n = xxx(n);
			i++;
		}
		printf("%d\n",i);
	}
	return 0;
}