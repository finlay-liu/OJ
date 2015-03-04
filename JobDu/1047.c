// http://ac.jobdu.com/problem.php?pid=1047
#include <stdio.h>

int susu(int num)
{
	int yes = 1;
	int i;
	if(num <= 1)
		yes = 0;
	else
	{
		for(i = 2;i < num;i++)
			if(num % i == 0)
				yes = 0;
	}
	
	return yes;
}

int main()
{
	int num;
	while(scanf("%d",&num) != EOF)
	{
		if(susu(num))
			printf("yes\n");
		else
			printf("no\n");
	}
}