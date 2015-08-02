#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, *a, a1, a2, ma;
    while(scanf("%d", &n) != EOF)
    {
        a1 = a2 = 0;
        ma = 1;
        a = (int *)malloc(n * sizeof(int));
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            a1 ^= a[i];
        }
        while(!(ma & a1))
            ma <<= 1;
        a1 = a2 = 0;
        for(i = 0; i < n; i++)
        {
            if(a[i] & ma)
                a1 ^= a[i];
            else
                a2 ^= a[i];
        }
        if(a1 < a2)
            printf("%d %d\n", a1, a2);
        else
            printf("%d %d\n", a2, a1);
    }
    return 0;
}