#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
	char mo[30];
	char fun[100];
}Password;
Password word[100010];

// freopen("sample.txt", "r", stdin);
int main()
{
	int i, tmp, len, index, N, j;
	char line[110];
	index = 0;
	// freopen("sample.txt", "r", stdin);
	while(gets(line))
	{
		if(!strcmp(line, "@END@"))
			break;
		len = strlen(line);
		for(i = 0;i < len;i++)
		{
			if(line[i] == ' ' && line[i - 1] == ']')
			{
				tmp = i;
				break;
			}
		}
		for(i = 0;i < tmp;i++)
			word[index].mo[i] = line[i];
		for(i = tmp + 1;i < len;i++)
			word[index].fun[i - tmp - 1] = line[i];
		index++;
		//printf("%s\n", line);
	}
	scanf("%d\n", &N);
	for(i = 0;i < N; i++)
	{
		tmp = 0;
		gets(line);
		for(j = 0;j < index;j++)
		{
			if(!strcmp(line, word[j].fun))
			{
				tmp = 1;
				printf("%s\n", word[j].mo);
				break;
			}
			else if(!strcmp(line, word[j].mo))
			{
				tmp = 1;
				printf("%s\n", word[j].fun);
				break;
			}
		}
		if(!tmp)
			printf("what?\n");
	}
	return 0;
}