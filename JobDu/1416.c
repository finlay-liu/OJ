#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[101];
	int Strong;
	int Food;
}Monkey;
Monkey monkeys[10001];

int cmp(const void *a, const void *b)
{
	Monkey *A, *B;
	A = (Monkey *)a;
	B = (Monkey *)b;

	if(A->Strong != B->Strong)
		return B->Strong - A->Strong;
	else
		return strcmp(A->name, B->name);
}

int main()
{
	int N, M, i, j, food;
	char tmpname[101];
	//freopen("sample.txt", "r", stdin);
	while(scanf("%d%d", &N, &M) != EOF)
	{
		for(i = 0;i < N; i++)
			scanf("%s %d %d", &monkeys[i].name, &monkeys[i].Strong, &monkeys[i].Food);

		qsort(monkeys, N, sizeof(Monkey), cmp);

		for(i = 0;i < M; i++)
		{
			food = 0;
			scanf("%s", &tmpname);
			for (j = 0;j < N; j++)
			{
				if(!strcmp(tmpname, monkeys[j].name))
				{
					food++;
					break;;
				}
				else
					food += monkeys[j].Food;
			}
			printf("%d\n", food);
		}
	}
}