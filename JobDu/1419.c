#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include <ctype.h>

typedef struct
{
	char OringalName[201];
}Paper;
Paper paper[201];

int cmp(const void *a, const void *b)
{
	Paper *A, *B;
	A = (Paper *)a;
	B = (Paper *)b;
	return strcasecmp(A->OringalName, B->OringalName);
}

int main()
{
	int N, i;
	//freopen("sample.txt", "r", stdin);
	while( scanf("%d\n", &N) != EOF )
	{
		for(i = 0;i < N; i++)
			gets(paper[i].OringalName);

		qsort(paper, N, sizeof(Paper), cmp);
		for(i = 0;i < N; i++)
			printf("%s\n", paper[i].OringalName);
	}
}