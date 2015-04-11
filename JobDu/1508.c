#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isNum(char num[], int start, int end)
{
	int i;
	for (i = start; i < end; i++)
	{
		if (num[i] >= '0' && num[i] <= '9')
			continue;
		else
			return 0;
	}
	return 1;
}


char input[10000001];

int main()
{
	int i, len, flag;
	while (scanf("%s", &input) != EOF)
	{
		len = strlen(input);
		if (input[0] == '-')
		{
			if (isNum(input, 1, len))
				printf("%s\n", input);
			else
				printf("My God\n");
		}
		else if (input[0] == '+')
		{
			if (isNum(input, 1, len))
			{
				for (i = 1; i < len; i++)
					printf("%c", input[i]);
				printf("\n");
			}
			else
				printf("My God\n");
		}
		else
		{
			if (isNum(input, 1, len))
				printf("%s\n", input);
			else
				printf("My God\n");
		}
	}
}