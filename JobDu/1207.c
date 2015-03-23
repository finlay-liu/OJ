#include <stdio.h>
#include <math.h>

int main()
{
    int n, ans, i;
    while(scanf("%d", &n) == 1)
    {
        ans = 0;
        for(i = 2; i <= sqrt(n); i++)
		{
			if(n % i == 0)
            {
                while(n % i == 0)
                {
                    ans ++;
                    n = n / i;
                }
            }
		}
        if(n > 1)
            ans ++;
        printf("%d\n", ans);
    }
    return 0;
}