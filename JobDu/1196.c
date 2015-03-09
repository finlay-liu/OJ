// http://ac.jobdu.com/problem.php?pid=1196
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// freopen("sample.txt", "r", stdin);

typedef struct
{
	int no;
	int grade;
}Student;
Student stu[120];

int cmp(const void *a, const void *b)
{
	Student *A = (Student *)a;
	Student *B = (Student *)b;
	if(A->grade != B->grade)
		return A->grade > B->grade ? 1 : -1;
	else
		return A->no > B->no ? 1 : -1;
}

int main()
{
	int N, i;
	while(scanf("%d", &N) != EOF)
	{
		for(i = 0;i < N;i++)
			scanf("%d%d", &stu[i].no, &stu[i].grade);
		qsort(stu, N, sizeof(Student), cmp);
		for(i = 0;i < N;i++)
			printf("%d %d\n", stu[i].no, stu[i].grade);
	}
	return 0;
}