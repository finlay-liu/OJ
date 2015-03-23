#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int cmp(const void *a, const void *b)
{
	char *p1, *p2;
	int len1, len2, i;
	p1 = (char *)a;
	p2 = (char *)b;
	len1 = strlen(p1);
	len2 = strlen(p2);
	if(len1 != len2)
		return len1 - len2;
	else
	{
		for(i = 0;i < len1;i++)
			if ( *(p1 + i) != *(p2 + i) )
				return *(p1 + i) - *(p2 + i);
		return 1;
	}
}

// freopen("sample.txt", "r", stdin);
int main()
{
	int n, i;
	char line[110][1010];
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0;i < n;i++)
			scanf("%s", &line[i]);
		qsort(line, n, sizeof(char) * 1010, cmp);
		for(i = 0;i < n;i++)
			printf("%s\n", line[i]);
	}
	return 0;
}