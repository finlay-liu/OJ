#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int line1[100000],line2[100000];
// freopen("sample.txt", "r", stdin);
int main()
{
	int n, i, j, k;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0;i < n - 1; i++)
		{
			j = i + 1;
			line2[0] = 1;
			line2[j] = 1;
			for(k = 1;k < j; k++)
				line2[k] = line1[k - 1] + line1[k];
			memcpy(line1, line2, sizeof(line1));
			printf("%d", line2[0]);
			for(k = 1;k <= j;k++)
				printf(" %d", line2[k]);
			printf("\n");
		}
	}
	return 0;
}