#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	char line[1000], c;
	int len, i;
	while(scanf("%s %c", &line, &c) != EOF)
	{
		len = strlen(line);
		for(i = 0;i < len; i++)
		{
			if(line[i] == c)
				continue;
			else
				printf("%c", line[i]);
		}
		printf("\n");
	}
	return 0;
}