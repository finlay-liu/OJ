#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

typedef struct
{
	char name[50];
	int grade;
}Student;
Student stu[1500];

int cmp(const void *a, const void *b)
{
	Student *s1 = (Student *)a;
	Student *s2 = (Student *)b;
	if(s1->grade != s2->grade)
		return s1->grade > s2->grade ? -1 : 1;
	else 
		return strcmp(s1->name, s2->name);
}

int main()
{
	int N, M, G, i, j, num, tmp;
	int *array;
	while(scanf("%d", &N) != EOF)
	{
		if(N == 0)
			return 0;
		scanf("%d%d", &M, &G);
		array = (int *)malloc(M * sizeof(int));
		for(i = 0;i < M;i++)
			scanf("%d", &array[i]);
		for(i = 0;i < N;i++)
		{
			scanf("%s", &stu[i].name);
			scanf("%d", &num);
			stu[i].grade = 0;
			for(j = 0;j < num;j++)
			{
				scanf("%d", &tmp);
				stu[i].grade += array[tmp - 1];
			}
		}
		qsort(stu, N, sizeof(Student), cmp);
		num = 0;
		for(i = 0;i < N;i++)
			if(stu[i].grade >= G)
				num++;
		printf("%d\n", num);
		for(i = 0;i < N;i++)
			if(stu[i].grade >= G)
				printf("%s %d\n",stu[i].name, stu[i].grade);
		free(array);
	}
	return 0;
}