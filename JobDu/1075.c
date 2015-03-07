// http://ac.jobdu.com/problem.php?pid=1075
#include <stdio.h>

int main()
{
	int seq[1000], i, j, n;
	seq[0] = 0;
	seq[1] = 1;
	for(i = 2;i < 1000;i++)
		seq[i] = seq[i - 1] + seq[i - 2];

	while(scanf("%d",&n) != EOF)
	{
		for(i = 0; i < n;i++)
		{
			printf("%d",seq[0]);
			for(j = 1; j < 2 * i + 1;j++)
				printf(" %d",seq[j]);
			printf("\n");
		}
	}
}