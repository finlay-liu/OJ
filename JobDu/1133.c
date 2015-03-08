// http://ac.jobdu.com/problem.php?pid=1133
#include <stdio.h>

double ji(int n)
{
	if(n>= 90 && n<= 100)
		return 4.0f;
	else if(n >= 85 && n<= 89)
		return 3.7f;
	else if(n >= 82 && n<= 84)
		return 3.3f;
	else if(n >= 78 && n<= 81)
		return 3.0f;
	else if(n >= 75 && n<= 77)
		return 2.7f;
	else if(n >= 72 && n<= 74)
		return 2.3f;
	else if(n >= 68 && n<= 71)
		return 2.0f;
	else if(n >= 64 && n<= 67)
		return 1.5f;
	else if(n >= 60 && n<= 63)
		return 1.0f;
	else
		return 0;
}

int main()
{
	int n, i, tmp;
	int l1[10], l2[10];
	double GPA;
	while(scanf("%d", &n) != EOF)
	{
		tmp = 0;
		for(i = 0;i < n;i++)
		{
			scanf("%d",&l1[i]);
			tmp += l1[i];
		}
		for(i = 0;i < n;i++)
			scanf("%d",&l2[i]);

		GPA = 0;
		for(i = 0;i < n;i++)
			GPA += ji(l2[i]) * l1[i];
		GPA /= tmp;
		printf("%.2f\n",GPA);
	}
	return 0;
}