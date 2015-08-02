#include <stdio.h>
#include <stdlib.h>

int main()
{
	// freopen("data.in", "r", stdin);
	long long N, i;
	long long thissum, sum, tmp;
	while(scanf("%lld", &N) != EOF)
	{
		scanf("%lld", &tmp);
		thissum = sum = tmp;
		for(i = 1; i < N; ++i)
		{
			scanf("%lld", &tmp);
			if(sum > 0)
				sum += tmp;
			else
				sum = tmp;

			if(thissum < sum)
				thissum = sum;
		}
		printf("%lld\n", thissum);
	}
	return 0;
}