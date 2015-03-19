#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int SearchChar(char input[], char ch)
{
	int i, flag;
	flag = 0;
	for(i = 0;i < strlen(input); i++)
		if(input[i] == ch)
			flag = 1;
	return flag;
}

int jiecheng(int n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return jiecheng(n - 1) * n;
}

int main()
{
	int num1, num2;
	char line[100], *ch;
	while(gets(line))
	{
		if(SearchChar(line, '+'))
		{
			ch = strtok(line, " ");
			num1 = atoi(ch);
			strtok(NULL, " ");
			ch = strtok(NULL, " ");
			num2 = atoi(ch);
			printf("%d\n", num1 + num2);
		}
		else if(SearchChar(line, '-'))
		{
			ch = strtok(line, " ");
			num1 = atoi(ch);
			strtok(NULL, " ");
			ch = strtok(NULL, " ");
			num2 = atoi(ch);
			printf("%d\n", num1 - num2);
		}
		else if(SearchChar(line, '*'))
		{
			ch = strtok(line, " ");
			num1 = atoi(ch);
			strtok(NULL, " ");
			ch = strtok(NULL, " ");
			num2 = atoi(ch);
			printf("%d\n", num1 * num2);
		}
		else if(SearchChar(line, '/'))
		{
			ch = strtok(line, " ");
			num1 = atoi(ch);
			strtok(NULL, " ");
			ch = strtok(NULL, " ");
			num2 = atoi(ch);
			if(num2 == 0)
				printf("error\n");
			else
				printf("%d\n", num1 / num2);
		}
		else if(SearchChar(line, '!'))
		{
			ch = strtok(line, " ");
			num1 = atoi(ch);
			printf("%d\n", jiecheng(num1));
		}
		else if(SearchChar(line, '%'))
		{
			ch = strtok(line, " ");
			num1 = atoi(ch);
			strtok(NULL, " ");
			ch = strtok(NULL, " ");
			num2 = atoi(ch);
			if(num2 == 0)
				printf("error\n");
			else
				printf("%d\n", num1 % num2);
		}
	}
	return 0;
}