#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int char2int(char ch)
{
	if(ch >= 'a' && ch <= 'c')
		return 2;
	else if(ch >= 'd' && ch <= 'f')
		return 3;
	else if(ch >= 'g' && ch <= 'i')
		return 4;
	else if(ch >= 'j' && ch <= 'l')
		return 5;
	else if(ch >= 'm' && ch <= 'o')
		return 6;
	else if(ch >= 'p' && ch <= 's')
		return 7;
	else if(ch >= 't' && ch <= 'v')
		return 8;
	else
		return 9;

}
// freopen("sample.txt", "r", stdin);
int main()
{
	int i;
	char line[10010];
	while(scanf("%s", line) != EOF)
	{
		for(i = 0;i < strlen(line); i++)
			printf("%d", char2int(line[i]));
		printf("\n");
	}
	return 0;
}