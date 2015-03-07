// http://ac.jobdu.com/problem.php?pid=1064
#include <stdio.h>
int main()
{
	int i, j, k, r;	// ijkr
	for(i = 1;i < 10;i++)
	{
		for(j = 0;j < 10;j++)
		{
			for(k = 0;k < 10;k++)
			{
				for(r = 0;r < 10;r++)
				{
					if((r * 1000 + k * 100 + j * 10 + i) == 9 * (i * 1000 + j * 100 + k * 10 + r))
						printf("%d%d%d%d\n",i,j,k,r);
				}
			}
		}
	}
	return 0;
}