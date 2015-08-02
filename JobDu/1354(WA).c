#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Sequence(int num)
{
    int start, end, mid, flag;
    flag = 0;
    mid = num / 2 + num % 2;
    for(start = 1; start <= mid; start++)
    {
        for(end = start + 1; end <= mid; end++)
        {
            // printf("start:%d end:%d num:%d\n", start, end, num);
            if((end - start + 1) * (end + start) / 2 == num && (end - start) >= 1) 
            {
                if(!flag)
                {
                    printf("#\n");
                    flag = !flag;
                }
                for(int i = start; i <= end; i++)
                {
                    if(i != end) printf("%d ", i);
                    else printf("%d\n", i);
                }
            }
        }
    }
    if(!flag)
        printf("Pity!\n");
    else
        printf("#\n");
}

int main()
{
    int n;
    freopen("data.in", "r", stdin);
    while(scanf("%d", &n) != EOF)
    {
        if(n < 0)
            break;
        Sequence(n);
    }
    return 0;
}