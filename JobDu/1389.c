#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	long long result;
	while(scanf("%d", &n) != EOF)
	{
		result = (long long)pow(2, n - 1);
		printf("%ld\n", result);
	}
	return 0;
}