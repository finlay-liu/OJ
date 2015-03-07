// http://ac.jobdu.com/problem.php?pid=1074
#include<stdio.h>
int main()
{
	int i,m,n;
	for(i=0;i<256;i++)
	{
		n=i*i;m=0;
		while(n)
		{
			m=m*10+n%10;
			n=n/10;
		}
		if(m==i*i)
			printf("%d\n",i);
	}
	return 0;
}