#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// freopen("sample.txt", "r", stdin);
int main()
{
	char input[110];
	int i, j, len, flag;
	while(gets(input))
	{
		len = strlen(input);
		for(i = 0;i < len;i++)
		{
			if(input[i] != ' ')
			{
				flag = 0;
				for(j = i + 1;j < len;j++)
				{
					if(input[j] == input[i])
					{
						flag = 1;
						printf("%c:%d", input[i], i);
						break;
					}
				}
				for(j = i + 1;j < len;j++)
				{
					if(input[j] == input[i])
					{
						printf(",%c:%d", input[j], j);
						input[j] = ' ';
					}
				}
				if(flag)
					printf("\n");
			}
			
		}
	}
	return 0;
}