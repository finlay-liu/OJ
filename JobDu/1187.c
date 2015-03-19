#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

typedef struct
{
	int no;
	char name[10];
	int age;
}Member;
Member mem[50];

int cmp(const void *a, const void *b)
{
	Member *A = (Member *)a;
	Member *B = (Member *)b;
	if(A->age != B->age)
		return A->age - B->age;
	else if(A->no != B->no)
		return A->no - B->no;
	else
		return strcmp(A->name, B->name);
}

int main()
{
	int N, i;
	while(scanf("%d", &N) != EOF)
	{
		for(i = 0;i < N;i++)
			scanf("%d%s%d", &mem[i].no, &mem[i].name, &mem[i].age);
		qsort(mem, N, sizeof(Member), cmp);
		if(N > 3)
			N = 3;
		for(i = 0;i < N;i++)
			printf("%d %s %d\n", mem[i].no, mem[i].name, mem[i].age);
	}
	return 0;
}