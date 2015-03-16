#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXLEN	150
int Num[MAXLEN][MAXLEN];
int out[MAXLEN];
// freopen("sample.txt", "r", stdin);
int main()
{
	int a, n, i, j, tmp;
	while(scanf("%d%d", &a, &n) != EOF)
	{
		memset(Num, 0, sizeof(Num));
		memset(out, 0, sizeof(out));
		for(i = 0; i < n;i++)
			for(j = MAXLEN - 1; j >= MAXLEN - i - 1; j--)
				Num[i][j] = a;

		for(i = MAXLEN - 1; i > MAXLEN - n - 1; i--)
		{
			tmp = 0;
			for(j = 0; j <= n; j++)
				tmp += Num[j][i];
			out[i] = tmp;
		}
		for(i = MAXLEN - 1; i >= 0; i--)
		{
			if(out[i] >= 10)
			{
				out[i - 1] += out[i] / 10;
				out[i] = out[i] % 10;
			}
		}
		tmp = 0;
		for(i = 0;i < MAXLEN;i++)
		{
			if(out[i] != 0 && tmp == 0)
			{
				printf("%d", out[i]);
				tmp = 1;
			}
			else if(tmp)
				printf("%d", out[i]);
		}
		printf("\n");
	}
	return 0;
}