#include <stdio.h>
#include <string.h>
#define MAX 0x7fffffff
int main()
{
    char a[1000][1002];
    int i = 0, min = MAX, max = 0, temp, j;
    while(scanf("%s", a[i++]) != EOF) {}
    for(j = 0; j < i; j++)
    {
        temp = strlen(a[j]);
        if(temp < min)
			min = temp;
        if(temp > max)
			max = temp;
    }
    for(j = 0; j < i; j++)
        if(strlen(a[j]) == min)
            printf("%s\n", a[j]);
    for(j = 0; j < i; j++)
        if(strlen(a[j]) == max)
            printf("%s\n", a[j]);
    return 0;
}