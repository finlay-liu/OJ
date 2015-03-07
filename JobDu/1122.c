// http://ac.jobdu.com/problem.php?pid=1122
#include <stdio.h>
int main()
{
	int N, num[20], i;
	num[1] = 1;
	num[2] = 2;
	for(i = 3; i < 20; i++)
		num[i] = num[i - 1] + num[i - 2];
	while(scanf("%d",&N) != EOF)
	{
		printf("%d\n",num[N]);
	}
}