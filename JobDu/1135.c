#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

typedef struct
{
	char line[110];
}Line;
Line in[100000];

int cmp(const void *a, const void *b)
{
	Line *A = (Line *)a;
	Line *B = (Line *)b;
	return 
		strlen(A->line) > strlen(B->line);
}

int main()
{
	int n, i;
	while(scanf("%d", &n) != EOF)
	{
		gets(in[0].line);
		for(i = 0;i < n;i++)
		{
			//gets(in[i].line);
			gets(in[i].line);
			if(!strcmp(in[i].line, "stop"))
				break;
		}
		n = i;
		qsort(in, i, sizeof(Line), cmp);
		for(i = 0;i < n;i++)
			puts(in[i].line);
	}
	return 0;
}