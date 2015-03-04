// http://ac.jobdu.com/problem.php?pid=1046
#include<stdio.h>

void main()
{
    int a, b, c, d, e, f, g, h, i, j, k, max;
    int m[10];

    while(scanf("%d %d %d %d %d %d %d %d %d %d" , &a, &b, &c, &d, &e, &f, &g, &h, &i, &j) != EOF)
    {
        max = 0;
        m[0] = a;
        m[1] = b;
        m[2] = c;
        m[3] = d;
        m[4] = e;
        m[5] = f;
        m[6] = g;
        m[7] = h;
        m[8] = i ;
        m[9] = j;
        for(k = 0; k < 10; k++)
            if(max < m[k])
                max = m[k];
        printf("max=%d\n", max);
    }
}