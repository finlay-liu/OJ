#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int N, i;
	long long num[100];
	num[1] = 1;
	num[2] = 2;
	for(i = 3; i < 100;i++)
		num[i] = num[i - 1] + num[i - 2];
	while(scanf("%d", &N) != EOF)
	{
		printf("%lld\n", num[N]);
	}
	return 0;
}