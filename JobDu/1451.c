#include <stdio.h>

int main()
{
	int n, i;
	long long f[21] = {0};
	f[2] = 1;
	f[3] = 2;	
	while(scanf("%d", &n) != EOF && n > 1)
	{
		if(n < 4)
			printf("%d\n", f[n]);
		else
		{
			for (i = 4; i <= n; i++)
				f[i] = (i - 1) * (f[i - 1] + f[i - 2]);
			printf("%lld\n", f[n]);
		}
	}
	return 0;
}