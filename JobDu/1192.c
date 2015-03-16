#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	char line[1010];
	int i, flag;
	while(scanf("%s", &line) != EOF)
	{
		flag = 1;
		for(i = 0;i < (strlen(line) + 1) / 2;i++)
			if(line[i] != line[strlen(line) - i - 1])
				flag = 0;
		if(flag)
			printf("Yes!\n");
		else
			printf("No!\n");
	}
	return 0;
}