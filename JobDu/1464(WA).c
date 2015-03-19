#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	char line[100];
	int len, i;
	while(scanf("%s", &line) != EOF)
	{
		len = strlen(line) - 8;
		printf("%c", line[0]);
		for(i = 0;i < len;i++)
			printf(" ");
		printf("%c", line[strlen(line) - 1]);
		printf("\n");
		printf("%c", line[1]);
		for(i = 0;i < len;i++)
			printf(" ");
		printf("%c", line[strlen(line) - 2]);
		printf("\n");
		printf("%c", line[2]);
		for(i = 0;i < len;i++)
			printf(" ");
		printf("%c", line[strlen(line) - 3]);
		printf("\n");
		for(i = 3; i < strlen(line) - 3;i++)
			printf("%c", line[i]);
		printf("\n");
	}
	return 0;
}