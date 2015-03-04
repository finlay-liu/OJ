// http://ac.jobdu.com/problem.php?pid=1015
#include <stdio.h>
int main()
{
	int num1, num2, k, tmp1, tmp2, flag;
	// freopen("1015.in","r",stdin);
	while(scanf("%d%d%d",&num1,&num2,&k) != EOF)
	{
		if(num1 == 0 && num2 == 0)
			return 0;
		
		tmp1 = num1;
		tmp2 = num2;
		flag = 1;
		while(k)
		{
			if(tmp1 % 10 == tmp2 % 10)
			{
				k--;
				tmp1 /= 10;
				tmp2 /= 10;
			}
			else
			{
				flag = 0;
				break;
			}
		}
		if(flag)
			printf("-1\n");
		else
			printf("%d\n",num1 + num2);
	}
	// fclose(stdin);
	return 0;
}