#include <stdio.h>
int main()
{
    int i, n;
    int number[11];
    number[0] = 1;
    for(i = 1; i < 11; i ++)
    {
        number[i] = i * number[i - 1];
    }
    while(scanf("%d", &n) != EOF)
    {
        if(n == 0)
        {
            printf("NO\n");
            continue;
        }
        for(i = 10; i >= 0; i --)
        {
            if(n >= number[i])
            {
                n -= number[i];
            }
        }
        if(n == 0)        
			printf("YES\n");
        else 
			printf("NO\n");
    }
    return 0;
}