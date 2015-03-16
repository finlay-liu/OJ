#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

typedef struct
{
	int id;
	int s;
}Member;
Member mem[1010];

int cmp(const void *a, const void *b)
{
	Member *A = (Member *)a;
	Member *B = (Member *)b;
	if(A->s != B->s)
		return A->s > B->s ? -1 : 1;
	else
		return A->id > B->id ? 1 : -1;
}

int main()
{
	int m, n, i, min;
	while(scanf("%d%d", &n, &m) != EOF)
	{
		for(i = 0;i < n;i++)
			scanf("%d%d", &mem[i].id, &mem[i].s);
		qsort(mem, n, sizeof(Member), cmp);
		if(m > n)
			min = n;
		else
			min = m;
		for(i = 0;i < min;i++)
			printf("%d\n", mem[i].id);
	}
	return 0;
}