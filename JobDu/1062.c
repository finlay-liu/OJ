// http://ac.jobdu.com/problem.php?pid=1062
#include <stdio.h>

int main()
{
	float n, out;
	while(scanf("%f",&n) != EOF)
	{
		if(n >= 0 && n< 2)
			out = n * (-1) + 2.5;
		else if(n >= 2 && n < 4)
			out = 2 - 1.5 * (n - 3) * (n - 3);
		else if(n >= 4 && n < 6)
			out = n / 2 -1.5;
		printf("%0.3f\n",out);
	}
}