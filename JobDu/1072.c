#include<stdio.h>
int find(float a[], int n, float x)
{
    int i, flag = 1; //1代表找不到，0代表找到了
    for(i = 0; i < n; i++)
        if(a[i] == x)
            flag = 0;
    return flag;
}

int  main()
{
    float a[210];
    int flag, i, j, k, n;
    float sum = 0;
	n = 0;
    for(i = 0; i <= 5; i++)
        for(j = 0; j <= 4; j++)
            for(k = 0; k <= 6; k++)
            {
                sum = 0.8 * i + j + 1.8 * k;
                if(find(a, n, sum))
                {
                    a[n] = sum;
                    n++;
                }
            }
    printf("%d\n", n - 1);
    return 0;
}