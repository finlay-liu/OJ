
#include<stdio.h>
int main()
{
        int i,n;
        long long a[71];
        while(scanf("%d",&n)!=EOF)
        {
                if(n>=1&&n<=70)
                {
                        a[0]=0;
                        a[1]=1;        
                        for(i=2;i<=n;i++)
                        {
                                a[i]=a[i-1]+a[i-2];
                        }
                        printf("%lld\n",a[n]);
                }
                else 
                        return 0;
        }
        return 0;
}