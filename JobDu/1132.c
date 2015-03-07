// http://ac.jobdu.com/problem.php?pid=1132
#include <stdio.h>

int has7(int num)
{
	if(num == 7 || num / 10 == 7 || num % 10 == 7)
		return 1;
	else
		return 0;
}

int main()
{
	int N, i, out;
	while(scanf("%d", &N) != EOF)
	{
		out = 0;
		for(i = 1; i <= N;i++)
			if(!(i % 7 == 0 || has7(i)))
				out += i * i;
		printf("%d\n",out);
	}
}