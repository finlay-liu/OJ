// http://ac.jobdu.com/problem.php?pid=1010
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CheckSpace(char *ch,int start,int end)
{
	int i, flag = 0;
	for(i = start; i <= end; i++)
		if(ch[i] == ' ')
			flag = 1;
	return flag;
}

int Str2Num(char *ch)
{
	int i, len;
	len = strlen(ch);
	if(len == 4 && ch[0] == 'z')
		return 0;
	else if(len == 3 && ch[0] == 'o')
		return 1;
	else if(len == 3 && ch[0] == 't')
		return 2;
	else if(len == 5 && ch[0] == 't')
		return 3;
	else if(len == 4 && ch[0] == 'f' && ch[1] == 'o')
		return 4;
	else if(len == 4 && ch[0] == 'f' && ch[1] == 'i')
		return 5;
	else if(len == 3 && ch[0] == 's')
		return 6;
	else if(len == 5 && ch[0] == 's')
		return 7;
	else if(len == 5 && ch[0] == 'e')
		return 8;
	else if(len == 4 && ch[0] == 'n')
		return 9;
}

// zero one two three four five six seven eight nine
int main()
{
	int num1, num2;
	int len, index, i, flag1, flag2;
	char *delim1 = "+";
	char *delim2 = " ";
	char line[50], *p1, *p2, *cnum1, *cnum2, *cnum3, *cnum4;
	//freopen("1010.in","r",stdin);
	while(fgets(line, 50, stdin))
	{
		num1 = num2 = 0;
		p1 = strtok(line, delim1);	// 1st
		p2 = strtok(NULL, delim1);	// 2nd

		if(CheckSpace(p1,0,strlen(p1) - 2))	// xx
		{
			cnum1 = strtok(p1, delim2);
			cnum2 = strtok(NULL, delim2);
			num1 = Str2Num(cnum1) * 10 + Str2Num(cnum2);
		}
		else
		{
			cnum1 = strtok(line, delim2);
			num1 = Str2Num(cnum1);
		}

		if(CheckSpace(p2,1,strlen(p2) - 4))	// xx
		{
			cnum3 = strtok(p2, delim2);
			cnum4 = strtok(NULL, delim2);
			num2 = Str2Num(cnum3) * 10 + Str2Num(cnum4);
		}
		else
		{
			cnum3 = strtok(p2, delim2);
			num2 = Str2Num(cnum3);
		}
		if(num1 == 0 && num2 ==0)
			return 0;
		printf("%d\n",num1 + num2);
	}
	//fclose(stdin);
	return 0;
}