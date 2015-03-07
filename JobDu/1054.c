// http://ac.jobdu.com/problem.php?pid=1054
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
char a[205];

int compare(const void  *a,const void *b)
{
    return (*(char *)a)-(*(char *)b);
}

int main()
{
    while(scanf("%s",a)!=EOF){
        int len=strlen(a);
        qsort(a,len,sizeof(a[0]),compare);
        printf("%s\n",a);                        
    } 
    return 0;
}