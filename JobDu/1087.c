// http://ac.jobdu.com/problem.php?pid=1087
#include<stdio.h>
#include<math.h>

int fun(int n)
{
    int i;
    int num = 0;
    int a;
    for(i = 1; i < sqrt(n); i++)
    {
        if(n % i == 0)
            num = num + 2;
    }
    a = sqrt(n);
    if(a * a == n)
        num++;
    return num;
}
int main()
{
    int n;
    int i;
    int a[1000];
    while(scanf("%d", &n) != EOF)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            a[i] = fun(a[i]);
        }
        for(i = 0; i < n; i++)
            printf("%d\n", a[i]);
    }
    return 0;
}