#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int i, len;
	char line[1000000];
	//freopen("sample.txt", "r", stdin);
	while(gets(line))
	{
		len = strlen(line);
		for(i = 0;i < len;i++)
		{
			if(line[i] == ' ')
				printf("%%20");
			else
				printf("%c", line[i]);
		}
		printf("\n");
	}
	return 0;
}