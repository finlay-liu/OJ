#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int cmp(const void *a, const void *b)
{
	return *(int *)a > *(int *)b ? 1 : -1;
}

int main()
{
	int a[3];
	while(scanf("%d%d%d", &a[0], &a[1], &a[2]) != EOF)
	{
		if(a[0] == 0)
			return 0;
		qsort(a, 3, sizeof(int), cmp);
		printf("%d\n", a[0] + a[1] - a[2]);
	}
	return 0;
}