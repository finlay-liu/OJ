#include <stdio.h>

long long Jie(int a)
{
    int i;
    long long ret = 1;
    for(i = 1; i <= a; i++)
    {
        ret = ret * i;
    }
    return ret;
}

int main( )
{
    long long y1, y2;
    int i, n;
    while(scanf("%d", &n) != EOF)
    {
        y1 = y2 = 0;
        for(i = 1; i <= n; i++)
        {
            if(i % 2 == 1)
                y1 = y1 + Jie(i);
            else
                y2 = y2 + Jie(i);
        }
        printf("%lld %lld\n", y1, y2);
    }
    return 0;
}