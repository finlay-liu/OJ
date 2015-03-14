#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int L[10050], Len, M, i, j;
	int tmp1, tmp2;
	while(scanf("%d%d", &Len, &M) != EOF)
	{
		memset(L, 0, 10050);
		for(i = 0;i <= Len;i++)
			L[i] = 1;
		for(i = 0;i < M;i++)
		{
			scanf("%d%d", &tmp1, &tmp2);
			for(j = tmp1;j <= tmp2;j++)
				L[j] = 0;
		}
		tmp1 = 0;
		for(i = 0;i <= Len;i++)
			if(L[i] != 0)
				tmp1++;
		printf("%d\n", tmp1);

	}
	return 0;
}