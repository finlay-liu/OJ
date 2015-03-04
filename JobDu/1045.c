// http://ac.jobdu.com/problem.php?pid=1045
#include <stdio.h>

int main()
{
	float n;
	int i, j, k;
	while(scanf("%f",&n) != EOF)
	{
		for(i = 0;i <= n / 5; i++)
		{
			for(j = 0;j <= n / 3; j++)
			{
				for(k = 0;k <= n * 3;k++)
				{
					if((i * 15 + 9 * j + k) <= 3 * n && (i + j + k) == 100)
						printf("x=%d,y=%d,z=%d\n",i,j,k);
				}
			}
		}
	}
	return 0;
}