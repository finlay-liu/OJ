#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int Vi;
	int Pi;
}Price;
Price price[101];

int cmp(const void *a, const void *b)
{
	Price *A, *B;
	A = (Price *)a;
	B = (Price *)b;
	if (A->Vi != B->Vi)
		return A->Vi < B->Vi;
	else
		return A->Pi < B->Pi;
}

int main()
{
	int TotalPrice, TotalCount, i, TotalVi;
	while(scanf("%d%d", &TotalPrice, &TotalCount) != EOF)
	{
		for(i = 0;i < TotalCount; i++)
			scanf("%d%d", &price[i].Pi, &price[i].Vi);

		TotalVi = 0;
		qsort(price, TotalCount, sizeof(Price), cmp);
		for(i = 0;i < TotalCount; i++)
		{
			if(TotalPrice >= price[i].Pi)
			{
				TotalVi += price[i].Vi;
				TotalPrice -= price[i].Pi;
			}
		}

		printf("%d\n", TotalVi);
	}
	return 0;
}