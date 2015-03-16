#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mission
{
    char str[200];
    char name[20];
    int year, month, day, hour, minute, second, micro;
    double runtime;
};

int compare(const void *p, const void *q);

int main()
{
    struct mission mis[10001];
    int  i, n = 0;
    memset(mis, 0, sizeof(mis));
    while(gets(mis[n].str))
    {
        if(strcmp(mis[n].str, "") == 0)
            break;
        sscanf(mis[n].str, "%s%d-%d-%d %d:%d:%d,%d %lf", mis[n].name, &mis[n].year, &mis[n].month, &mis[n].day, &mis[n].hour, &mis[n].minute, &mis[n].second, &mis[n].micro, &mis[n].runtime);
        n++;
    }
    qsort(mis, n, sizeof(mis[0]), compare);
    for(i = 0; i < n; i ++)
        printf("%s\n", mis[i].str);

    return 0;
}

int compare(const void *p, const void *q)
{
    const struct mission *a = p;
    const struct mission *b = q;

    if(a->runtime > b->runtime)
        return 1;
    else if(a->runtime == b->runtime && a->year > b->year)
        return 1;
    else if(a->runtime == b->runtime && a->year == b->year && a->month > b->month)
        return 1;
    else if(a->runtime == b->runtime && a->year == b->year && a->month == b->month && a->day > b->day)
        return 1;
    else if(a->runtime == b->runtime && a->year == b->year && a->month == b->month && a->day == b->day && a->hour > b->hour)
        return 1;
    else if(a->runtime == b->runtime && a->year == b->year && a->month == b->month && a->day == b->day && a->hour == b->hour && a->minute > b->minute)
        return 1;
    else if(a->runtime == b->runtime && a->year == b->year && a->month == b->month && a->day == b->day && a->hour == b->hour && a->minute == b->minute && a->second > b->second)
        return 1;
    else if(a->runtime == b->runtime && a->year == b->year && a->month == b->month && a->day == b->day && a->hour == b->hour && a->minute == b->minute && a->second == b->second && a->micro > b->micro)
        return 1;
    else if(a->runtime == b->runtime && a->year == b->year && a->month == b->month && a->day == b->day && a->hour == b->hour && a->minute == b->minute && a->second > b->second && a->micro == b->micro)
        return 0;
    else
        return -1;
}