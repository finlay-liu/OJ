#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

typedef struct
{
	int hour;
	int minute;
	int second;
}Time;

typedef struct
{
	char name[1000];
	Time comeTime;
	Time leaveTime;
}Person;
Person pers[1000];

int comeTimeCmp(const void *a, const void *b)
{
	Person *p1 = (Person *)a;
	Person *p2 = (Person *)b;
	int h, m, s;
	h = p1->comeTime.hour - p2->comeTime.hour;
	m = p1->comeTime.minute - p2->comeTime.minute;
	s = p1->comeTime.second - p2->comeTime.second;
	
	if(h > 0)
		return 1;
	else if(h == 0 && m > 0)
		return 1;
	else if(h == 0 && m == 0 && s > 0)
		return 1;
	else
		return -1;
}

int leaveTimeCmp(const void *a, const void *b)
{
	Person *p1 = (Person *)a;
	Person *p2 = (Person *)b;
	int h, m, s;
	h = p1->leaveTime.hour - p2->leaveTime.hour;
	m = p1->leaveTime.minute - p2->leaveTime.minute;
	s = p1->leaveTime.second - p2->leaveTime.second;
	
	if(h > 0)
		return 1;
	else if(h == 0 && m > 0)
		return 1;
	else if(h == 0 && m == 0 && s > 0)
		return 1;
	else
		return -1;
}


int main()
{
	int n, m, i, j;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0;i < n;i++)
		{
			scanf("%d", &m);
			for(j = 0;j < m;j++)
				scanf("%s %d:%d:%d %d:%d:%d",&pers[j].name, &pers[j].comeTime.hour, &pers[j].comeTime.minute, &pers[j].comeTime.second, &pers[j].leaveTime.hour, &pers[j].leaveTime.minute, &pers[j].leaveTime.second);
			qsort(pers, m, sizeof(Person), comeTimeCmp);
			printf("%s ", pers[0].name);
			qsort(pers, m, sizeof(Person), leaveTimeCmp);
			printf("%s\n", pers[m - 1].name);
		}
	}
	return 0;
}