#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int *)a > *(int *)b ? 1 : -1;
}
int data[1005];

int main()
{
	int n, i, sum;
	// freopen("data.in", "r", stdin);
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
			scanf("%d", &data[i]);

		sum = 0;
		for(i = 1; i < n; i++)
		{
			qsort(data + i -1, n - i + 1, sizeof(int), cmp);
			sum = sum + data[i] + data[i - 1];
			data[i] += data[i - 1];
		}
		printf("%d\n", sum);
	}
}