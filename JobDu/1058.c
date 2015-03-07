// http://ac.jobdu.com/problem.php?pid=1058
#include <stdio.h>

int main()
{
	int i;
	char line[4];
	while(scanf("%s",&line) != EOF)
	{
		for(i = 3; i >= 0; i--)
			printf("%c",line[i]);
		printf("\n");
	}
}