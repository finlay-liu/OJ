// http://ac.jobdu.com/problem.php?pid=1061
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[100];
	int age;
	int grade;
}Student;
Student N[1000];

int cmp (const void *a, const void *b)
{
    Student *StudentA = (Student *)a;
    Student *StudentB = (Student *)b;

    if ( StudentB->grade  != StudentA->grade )
        return StudentA->grade - StudentB->grade;
    else if(strcmp(StudentA->name,StudentB->name) != 0)
		return strcmp(StudentA->name,StudentB->name);
	else
		return StudentA->age - StudentB->age;
}

int main()
{
	int n, i;
	//freopen("sample.txt","r",stdin);
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0;i < n; i++)
			scanf("%s%d%d", &N[i].name, &N[i].age, &N[i].grade);
		qsort(N, n, sizeof(Student), cmp);
		for(i = 0;i < n; i++)
			printf("%s %d %d\n",N[i].name, N[i].age, N[i].grade);
	}
	//fclose(stdin);
	return 0;
}