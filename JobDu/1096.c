#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// freopen("sample.txt", "r", stdin);

typedef struct
{
	int year;
	int month;
	int day;
}Date;
int mday[] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int RunYear(int year)
{
    if(year % 4 == 0 && year % 100 != 0)
        return 1;
    else if(year % 400 ==0)
        return 1;
    else
        return 0;
}

int getDateDay(Date *date)
{
	int i, day = 0;
	for(i = 0;i < date->year;i++)
		if(RunYear(i))
			day += 366;
		else
			day += 365;
		
	if(RunYear(date->year))
		mday[1] = 29;
	else
		mday[1] = 28;
		
	for(i = 0;i < date->month;i++)
		day += mday[i];
	day += date->day;
	return day;
}

int main()
{
	int day1, day2, i;
	
	Date *date1, *date2;
	date1 = (Date *) malloc (sizeof(Date));
	date2 = (Date *) malloc (sizeof(Date));
	while(scanf("%d%d", &day1, &day2) != EOF)
	{
		date1->year = day1 / 10000;
		date2->year = day2 / 10000;

		date1->month = (day1 % 10000) / 100;
		date2->month = (day2 % 10000) / 100;

		date1->day = (day1 % 100000) % 100;
		date2->day = (day2 % 100000) % 100;

		day1 = getDateDay(date1);
		day2 = getDateDay(date2);
		if(day1 > day2)
			printf("%d\n", day1 - day2 + 1);
		else
			printf("%d\n", day2 - day1 + 1);
	}
	free(date1);
	free(date2);
	return 0;
}