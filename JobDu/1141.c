#include <stdio.h>
#include <stdlib.h>

int main()
{
        double a[12];
        double average, sum;
        int i;
        
        while(scanf("%lf",&a[0]) != EOF)
        {
                sum = a[0];
                for(i = 1; i <12; i++)
                {
                        scanf("%lf",&a[i]);
                        sum += a[i];
                }
                
                average = sum / 12.0;
                printf("$%.2lf\n",average);
        }

        return 0;
}