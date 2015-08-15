#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int num[600];

int SimpleNum(int a, int b)
{
	int i;
	for (i = 2; i <= a; ++i)
		if(b % i == 0 && a % i == 0)
			return 0;

	return 1;
}

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main()
{
	int n, i, j, count;
	// freopen("data.in", "r", stdin);
	while(scanf("%d", &n) != EOF)
	{
		if(n == 0)
			break;

		count = 0;
		for(i = 0; i < n; i++)
			scanf("%d", &num[i]);

		// qsort(num, n, sizeof(int), cmp);
		for(i = 0; i < n - 1; i++)
			for(j = i + 1; j < n; j++)
				if(SimpleNum(num[i], num[j]))
					count++;
		printf("%d\n", count);
	}
	return 0;
}