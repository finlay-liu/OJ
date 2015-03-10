#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int res[10010];
 
int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int i, j;
        memset(res, 0, sizeof(res));
        res[0] = 1;
        res[1] = 1;
        for (i = 2; i <= n; i++)
        {
            for (j = 1; j <= res[0]; j++)
                res[j] = res[j] * i;
             
            for (j = 1; j <= res[0]; j++)
            {
                if (res[j] >= 10)
                {
                    res[j+1] += res[j] / 10;
                    res[j] %= 10;
                    if (j == res[0])
                        res[0]++;
                }
            }
        }
        for (i = res[0]; i >= 1; i--)
            printf("%d", res[i]);
        printf("\n");
    }
    return 0;
}