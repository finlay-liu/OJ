#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int num[3001], N, p , i, Ntmp, index;
	while(scanf("%d%d", &N, &p) != EOF)
	{
		for(i = 1;i <= N; i++)
			num[i] = 1;
		Ntmp = N;
		index = 0;
		while(Ntmp > 0)
		{
			for(i = 1;i <= N; i++)
			{
				if(num[i])
				{
					index++;
					if(index == p)
					{
						num[i] = 0;
						if(Ntmp == N)
							printf("%d", i);
						else
							printf(" %d", i);
						Ntmp--;
						index = 0;
					}
				}
			}
		}
		printf("\n");
	}
	return 0;
}