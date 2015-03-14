#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int h , i, j, start, end, tmp1;
	while(scanf("%d", &h) != EOF)
	{
		start = end = h;
		for(i = 1;i < h;i++)
			end += 2;
		for(i = 0;i < h;i++)
		{
			for(j = 0;j < end - start;j++)
				printf(" ");
			for(j = 0;j < start;j++)
				printf("*");
			printf("\n");
			start += 2;
		}
	}
	return 0;
}