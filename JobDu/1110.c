// http://ac.jobdu.com/problem.php?pid=1110
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char hat[10];
	int weight;
}Mouse;
Mouse mm[100];

int cmp(const void *a, const void *b)
{
	Mouse *A = (Mouse *)a;
	Mouse *B = (Mouse *)b;
	return B->weight - A->weight;
}

int main()
{
	int n, i;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0;i < n;i++)
			scanf("%d %s", &mm[i].weight, &mm[i].hat);
		qsort(mm, n, sizeof(Mouse),cmp);
		for(i = 0;i < n;i++)
			printf("%s\n", mm[i].hat);
	}
	return 0;
}