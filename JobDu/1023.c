#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// freopen("sample.txt", "r", stdin);

typedef struct
{
	char no[10];
	char name[20];
	int score;
}Student;
Student stus[100500];

int cmp1(const void *a, const void *b)
{
	Student *A = (Student *)a;
	Student *B = (Student *)b;
	return strcmp(A->no, B->no);
}

int cmp2(const void *a, const void *b)
{
	Student *A = (Student *)a;
	Student *B = (Student *)b;
	if(!strcmp(A->name, B->name))
		return strcmp(A->no, B->no);
	else
		return strcmp(A->name, B->name);
}

int cmp3(const void *a, const void *b)
{
	Student *A = (Student *)a;
	Student *B = (Student *)b;
	if(A->score == B->score)
		return strcmp(A->no, B->no);
	else
		return A->score - B->score;
}

int main()
{
	int N, C, i, j;
	j = 1;
	while(scanf("%d%d", &N, &C) != EOF)
	{
		if(N == 0 && C == 0)
			return 0;
		for(i = 0;i < N;i++)
			scanf("%s%s%d", &stus[i].no, &stus[i].name, &stus[i].score);
		if(C == 1)
			qsort(stus, N, sizeof(Student), cmp1);
		else if(C == 2)
			qsort(stus, N, sizeof(Student), cmp2);
		else
			qsort(stus, N, sizeof(Student), cmp3);
		printf("Case %d:\n",j);
		for(i = 0;i < N;i++)
			printf("%s %s %d\n", stus[i].no, stus[i].name, stus[i].score);
		j++;
	}
	return 0;
}