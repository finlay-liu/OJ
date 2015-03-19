#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int i, index;
	char pass[] = "1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char line[1000];
	while(gets(line))
	{
		for(i = 0;i < strlen(line);i++)
		{
			if(line[i] == ' ')
				printf(" ");
			else
			{
				index = strchr(pass, line[i]) - pass;
				printf("%c", pass[ index - 1]);
			}
		}
		printf("\n");
	}
	return 0;
}