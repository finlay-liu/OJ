// http://ac.jobdu.com/problem.php?pid=1066
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
	return *(char *)a - *(char *)b;
}

int main()
{
	char line[21];
	while(scanf("%s",line) != EOF)
	{
		qsort(line, strlen(line), sizeof(char), cmp);
		printf("%s\n", line);
	}
	return 0;
}