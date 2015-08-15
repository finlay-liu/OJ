#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int main()
{
	int tree[1001];
	int n, i, height, start, end;
	// freopen("data.in", "r", stdin);
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < 1001; i++)
			tree[i] = -1;

		for(i = 0; i < n; i++)
			scanf("%d", &tree[i]);

		scanf("%d", &height);
		start = pow(2, height - 1) - 1;
		end = start * 2 + 1;

		if(height == 1 || n - start == 1)
		{
			printf("%d\n", tree[start]);
			continue;
		}
		else if(start > n)
		{
			printf("EMPTY\n");
			continue;
		}
		else
			printf("%d", tree[start]);
		for(i = start + 1; i < end && i < n; i++)
			printf(" %d", tree[i]);
		printf("\n");
	}
	return 0;
}