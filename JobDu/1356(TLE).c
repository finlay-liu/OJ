#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int num[1000001];
int main()
{
	int N, p, i, Ntmp, index;
	while (scanf("%d", &N) != EOF)
	{
		for (i = 1; i <= N; i++)
			num[i] = i;
		if (N == 0)
			return 0;
		scanf("%d", &p);

		Ntmp = N;
		index = 0;
		while (Ntmp > 0)
		{
			for (i = 1; i <= N; i++)
			{
				if (num[i])
				{
					if (Ntmp == 1)
					{
						Ntmp = 0;
						printf("%d\n", num[i]);
						break;
					}
					index++;
					if (index == p)
					{
						num[i] = 0;
						Ntmp--;
						index = 0;
					}
				}
			}
		}
	}
	return 0;
}