#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int n, i;
	char line[10000][20];
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0;i < n;i++)
			scanf("%s", &line[i]);

		printf("%s", line[n - 1]);
		for(i = n - 2;i >= 0;i--)
			printf(" %s", line[i]);
		printf("\n");
	}
	return 0;
}