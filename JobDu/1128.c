// http://ac.jobdu.com/problem.php?pid=1128
#include <stdio.h>
int main()
{
	int n, i, tmp;
	double sum;
	while(scanf("%d", &n) != EOF)
	{
		sum = 0;
		for(i = 0;i < n;i++)
		{
			scanf("%d", &tmp);
			sum += tmp;
		}
		printf("%.2f\n",sum / n);
	}
}