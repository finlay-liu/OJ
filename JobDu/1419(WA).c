#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
	char line[210];
}Line;
Line li[210];

int cmp(const void *a, const void *b)
{
	Line *l1, *l2;
	l1 = (Line *)a;
	l2 = (Line *)b;
	return strcmp(tolower(l1->line), tolower(l2->line));
}
// freopen("sample.txt", "r", stdin);
int main()
{
	int n, i;
	while(scanf("%d\n", &n) != EOF)
	{
		for(i = 0;i < n;i++)
			gets(li[i].line);
		qsort(li, n, sizeof(Line), cmp);
		for(i = 0;i < n;i++)
			printf("%s\n", li[i].line);
	}
	return 0;
}