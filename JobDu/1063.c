// http://ac.jobdu.com/problem.php?pid=1063
#include <stdio.h>

int main()
{
	int n, i, out;
	while(scanf("%d",&n) != EOF)
	{
		out = 0;
		if(n >= 0)
		{
			for(i = n;i <= 2*n; i++)
				out += i;
		}
		else if(n < 0)
		{
			for(i = 2 * n;i <= n; i++)
				out += i;
		}
		printf("%d\n",out);
	}
}