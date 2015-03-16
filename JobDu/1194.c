#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		printf("%o\n", n);
	}
	return 0;
}