// http://ac.jobdu.com/problem.php?pid=1079
#include <stdio.h>
#include <string.h>

int getCharIndex(char ch)
{
	if(ch == 'a' || ch == 'd' || ch == 'g' || ch == 'j' || ch == 'm' || 
		ch == 'p' || ch == 't' || ch == 'w')
		return 1;
	else if(ch == 'b' || ch == 'e' || ch == 'h' || ch == 'k' || ch == 'n'
		|| ch == 'q' || ch == 'u' || ch == 'x')
		return 2;
	else if(ch == 'c' || ch == 'f' || ch == 'i' || ch == 'l' || ch == 'o'
		|| ch == 'r' || ch == 'v' || ch == 'y')
		return 3;
	else
		return 4;
}

int getButtonIndex(char ch)
{
	if(ch >= 'a' && ch <= 'c')
		return 1;
	else if(ch >= 'd' && ch <= 'f')
		return 2;
	else if(ch >= 'g' && ch <= 'i')
		return 3;
	else if(ch >= 'j' && ch <= 'l')
		return 4;
	else if(ch >= 'm' && ch <= 'o')
		return 5;
	else if(ch >= 'p' && ch <= 's')
		return 6;
	else if(ch >= 't' && ch <= 'v')
		return 7;
	else
		return 8;
}

int main()
{
	int len, i, j, tap;
	char line[120];
	while(scanf("%s", line) != EOF)
	{
		len = strlen(line);
		tap = getCharIndex(line[0]);
		for(i = 1;i < len;i++)
		{
			if(getButtonIndex(line[i]) == getButtonIndex(line[i - 1]))
				tap = tap + getCharIndex(line[i]) + 2;
			else
				tap += getCharIndex(line[i]);
		}
		printf("%d\n", tap);
	}
	return 0;
}