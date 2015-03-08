// http://ac.jobdu.com/problem.php?pid=1169
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, buf[10100];
    int i, ji, ou;

    while(scanf("%d\n", &n) != EOF)
    {
        ji = ou = 0;
        for(i = 0; i < n; i++)
            scanf("%d", &buf[i]);
        for(i = 0; i < n; i++)
        {
            if(0 == buf[i] % 2)
                ou++;
            else
                ji++;
        }
        if(ou > ji)
            printf("NO\n");
        else
            printf("YES\n");

    }
    return 0;
}
