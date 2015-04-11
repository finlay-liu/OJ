#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
	char name[110];
	int num;
	int punish;
}Team;
Team tms[110];

int cmp(const void *a, const void *b)
{
	Team *A, *B;
	A = (Team *)a;
	B = (Team *)b;
	if(A->num != B->num)
		return A->num > B->num ? -1 : 1;
	else if(A->punish != B->punish)
		return A->punish > B->punish ? 1: -1;
	else
		return strcmp(A->name, B->name);
}

int main()
{
	int n, i;
	freopen("sample.txt", "r", stdin);
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0;i < n;i++)
			scanf("%s%d%d", &tms[i].name, &tms[i].num, &tms[i].punish);
		qsort(tms, n, sizeof(Team), cmp);
		for(i = 0;i < n;i++)
			printf("%s\n", tms[i].name);
	}
	fclose(stdin);
	return 0;
}