// http://ac.jobdu.com/problem.php?pid=1092
#include <stdio.h>

int main()
{
	int seq[31], i;
	seq[0] = 0;
	seq[1] = 1;
	for(i = 2;i < 31;i++)
		seq[i] = seq[i - 1] + seq[i - 2];

	while(scanf("%d",&i) != EOF)
	{
		printf("%d\n",seq[i]);
	}
}