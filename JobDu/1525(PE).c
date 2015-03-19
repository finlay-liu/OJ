#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

char tmp[100];

void Reverse(char *ch)
{
	int i;
	for(i = 0;i < strlen(ch); i++)
		tmp[strlen(ch) - 1 - i] = ch[i];
	tmp[strlen(ch)] = '\0';
}

int ContainSpace(char *ch)
{
	int flag, i;
	flag = 0;
	for(i = 0;i < strlen(ch);i++)
		if(ch[i] == ' ')
			flag = 1;
	return flag;
}

int main()
{
	int n;
	char line[100000], *ch;
	while(scanf("%d\n", &n) != EOF)
	{
		if(n == 0)
			break;

		gets(line);
		if(!ContainSpace(line))
		{
			Reverse(line);
			printf("%s\n", tmp);
		}
		else
		{
			ch = strtok(line, " ");
			Reverse(ch);
			printf("%s", tmp);
			while(ch = strtok(NULL, " "))
			{
				Reverse(ch);
				printf(" %s", tmp);
			}
			printf("\n");
		}
		
	}
	return 0;
}