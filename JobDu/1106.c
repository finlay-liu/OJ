// http://ac.jobdu.com/problem.php?pid=1106
#include <stdio.h>

int NumWei(int n)
{
	int tmp = 0;
	while(n != 0)
	{
		tmp += n % 10;
		n /= 10;
	}
	return tmp;
}

int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		if(n == 0)
			return 0;

		printf("%d %d\n",NumWei(n),NumWei(n * n));
	}
	return 0;
}