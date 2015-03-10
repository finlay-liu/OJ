#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int year;
	int month;
	int day;
}Date;
int mday[] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *weekDay[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
char *monthArray[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

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

int monthName(char *m)
{
	int i;
	for(i = 0;i < 12;i++)
		if(!strcmp(m,monthArray[i]))
			return i + 1;
}

int dayofweek(int y, int m, int d) /* 0 = Sunday */
{
       static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
       y -= m < 3;
       return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

int main()
{
	int day;
	char month[100];
	Date *date = (Date *)malloc(sizeof(Date));
	while(scanf("%d%s%d", &date->day, month, &date->year) != EOF)
	{
		date->month = monthName(month);
		day = getDateDay(date);
		printf("%s\n", weekDay[dayofweek(date->year, date->month, date->day)]);
	}
	return 0;
}