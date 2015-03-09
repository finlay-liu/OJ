// http://ac.jobdu.com/problem.php?pid=1155
#include <stdio.h>

int main()
{
	int n, i, tmp;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0;i < n;i++)
		{
			scanf("%d", &tmp);
			if(tmp % 2 == 1)
				printf("0 0\n");
			else if(tmp % 4 == 0)
				printf("%d %d\n", tmp / 4, tmp / 2);
			else if(tmp % 2 == 0)
				printf("%d %d\n", (tmp - tmp % 4) / 4 + 1, tmp / 2);
		}
	}
	return 0;
}