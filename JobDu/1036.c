#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int N, X, Y, Z, A, B, price, i, j, flag;
	while(scanf("%d", &N) != EOF)
	{
		flag = 0;
		scanf("%d%d%d", &X, &Y, &Z);
		for(i = 9;i >= 1 && flag == 0 ;i--)
		{
			for(j = 9;j >= 0 && flag == 0;j--)
			{
				if( (i * 10000 + X * 1000 + Y * 100 + Z * 10 + j) % N == 0 )
				{
					flag = 1;
					printf("%d %d %d\n", i, j, (i * 10000 + X * 1000 + Y * 100 + Z * 10 + j) / N);
				}
			}
		}
		if(flag == 0)
			printf("0\n");
	}
	return 0;
}