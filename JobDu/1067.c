// http://ac.jobdu.com/problem.php?pid=1067
#include <stdio.h>

int main()
{
	double jie[21];
	int i;
	jie[0] = 1;
	for(i = 1; i < 21;i++)
		jie[i] = jie[i - 1] * i;
	while(scanf("%d",&i) != EOF)
	{
		printf("%0.0f\n",jie[i]);
	}
}