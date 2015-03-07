// http://ac.jobdu.com/problem.php?pid=1055
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int len, i;
	char line1[200];
	while(scanf("%s",&line1) != EOF)
	{
		len = strlen(line1);
		for(i = len - 1; i >= 0; i--)
			printf("%c",line1[i]);
		printf("\n");
	}
}