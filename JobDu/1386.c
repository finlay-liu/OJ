#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include <ctype.h>

int main()
{
	int N, i, min, tmp;
	//freopen("sample.txt", "r", stdin);

	while (scanf("%d", &N) != EOF)
	{
		min = 10000001;
		for (i = 0; i < N; i++)
		{
			scanf("%d", &tmp);
			if (min > tmp)
				min = tmp;
		}
		printf("%d\n", min);
	}
}