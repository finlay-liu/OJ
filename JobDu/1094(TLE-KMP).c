#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char input[1000010], pattern[1000010], tmp[1000010];
// freopen("sample.txt", "r", stdin);
int main()
{
	int out;
	char *p;
	while(scanf("%s", &input) != EOF)
	{
		out = 0;
		p = input;
		scanf("%s", &pattern);
		while(strlen(p) >= strlen(pattern) && p != NULL)
		{
			strncpy(tmp, p, strlen(pattern));
			if(!strcmp(tmp, pattern))
			{
				out++;
				p++;
			}
			else
				p++;
		}
		printf("%d\n", out);
	}
	return 0;
}