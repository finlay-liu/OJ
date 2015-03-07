// http://ac.jobdu.com/problem.php?pid=1056
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, i, j;
	while(scanf("%d", &num1) != EOF)
	{
		scanf("%d",&num2);
		if(num1 < num2)
			j = num1;
		else
			j = num2;

		for(i = j; i >= 1; i--)
		{
			if(num1 % i == 0 && num2 % i == 0)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}