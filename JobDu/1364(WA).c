#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
	int Space;
	int Destroy;
}Bomb;
Bomb bombs[101];

int cmp(const void *a, const void *b)
{
	Bomb *A, *B;
	A = (Bomb *)a;
	B = (Bomb *)b;

	if (A->Destroy != B->Destroy)
		return B->Destroy - A->Destroy;
	else
		return A->Space - B->Space;
}

int main()
{
	int totalSpace, totalFire, i, out;
	while (scanf("%d%d", &totalSpace, &totalFire) != EOF)
	{
		for (i = 0; i < totalFire; i++)
			scanf("%d%d", &bombs[i].Space, &bombs[i].Destroy);

		qsort(bombs, totalFire, sizeof(Bomb), cmp);

		out = 0;
		for (i = 0; i < totalFire; i++)
		{
			if (totalSpace >= bombs[i].Space)
			{
				out += bombs[i].Destroy;
				totalSpace -= bombs[i].Space;
			}
		}
		printf("%d\n", out);
	}
}