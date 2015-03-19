#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int main()
{
	int N, num;
	while(scanf("%d", &N) != EOF)
	{
		if(N >= 2 & N < 10)
			num = 10;
		else
			num = 100;
		if( (N * N) % num == N)
			printf("Yes!\n");
		else
			printf("No!\n");
	}
	return 0;
}