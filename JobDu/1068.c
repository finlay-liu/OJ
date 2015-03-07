// http://ac.jobdu.com/problem.php?pid=1068
#include<stdio.h>
#include<math.h>
#define PI acos(-1)

int main(int argc,char** argv)
{
        double x0,y0,z0,x1,y1,z1;
        double r;
        double v;
        while(scanf("%lf%lf%lf%lf%lf%lf",&x0,&y0,&z0,&x1,&y1,&z1)!=EOF)
        {
                r=v=0;
                r=sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1)+(z0-z1)*(z0-z1));
                v=(4.0000000/3)*PI*r*r*r;
                printf("%.3lf %.3lf\n",r,v);
        }
        return 0;
}