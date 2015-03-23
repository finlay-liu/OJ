#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	char line1[1000];
	int k, len, i;
	while(scanf("%s%d", &line1, &k) != EOF)
	{
		len = strlen(line1);
		k = k % len;
		for(i = k;i < len; i++)
			printf("%c", line1[i]);
		for(i = 0; i < k; i++)
			printf("%c", line1[i]);
		printf("\n");
	}
	return 0;
}