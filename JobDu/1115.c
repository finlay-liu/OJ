// http://ac.jobdu.com/problem.php?pid=1115
#include <stdio.h>

int main()
{
	int a,b,c,d,e,f,out;
	while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f) != EOF)
	{
		out = 0;
		if(b < a)
			out += b;
		if(c < a)
			out += c;
		if(d < a)
			out += d;
		if(e < a)
			out += e;
		if(f < a)
			out += f;
		printf("%d\n",out);
	}
	return 0;
}