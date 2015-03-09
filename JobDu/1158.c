// http://ac.jobdu.com/problem.php?pid=1158
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int N, K, year;
	double price = 200;
	while(scanf("%d%d", &N, &K) != EOF)
	{
		price = 200;
		for(year = 1;year <= 20; year++)
		{
			if(N * year >= price)
			{
				printf("%d\n", year);
				break;
			}
			else if(year == 20 && N * year < price)
				printf("Impossible\n");
			price *= (1 + K / 100.0);
		}
	}
	return 0;
}