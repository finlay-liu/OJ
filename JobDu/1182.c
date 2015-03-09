#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *delime = " ";
	char line[1000], *ch;
	//freopen("sample.txt", "r", stdin);
	while(gets(line) != NULL)
	{
		line[strlen(line) - 1] = ' ';
		ch = strtok(line, delime);
		printf("%d", strlen(ch));
		while(ch)
		{
			ch = strtok(NULL, delime);
			if(ch)
				printf(" %d", strlen(ch));
		}
		printf("\n");
	}
	return 0;
}