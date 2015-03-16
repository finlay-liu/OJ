#include<stdio.h>

void print( int m, long long n)
{
    if(n < m)
    {
        printf("%d", n);
        return;
    }
    else
    {

        print(m, n / m);
        printf("%d", n % m);
    }
}
int main(void)
{

    int m;
    long long a, b;
    while(scanf("%d", &m) != EOF && m != 0)
    {
        scanf("%lld%lld", &a, &b);
        print(m, a + b);
        printf("\n");
    }
    return 0;
}