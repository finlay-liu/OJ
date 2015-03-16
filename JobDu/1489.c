#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int a1, a2, a3, a4, a5, a6;
	int b1, b2, b3, b4, b5, b6;
	while(scanf("%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &a6) != EOF)
	{
		scanf("%d%d%d%d%d%d", &b1, &b2, &b3, &b4, &b5, &b6);
		printf("%d %d \n", a1 * b1 + a2 * b3 + a3 * b5, a1 * b2 + a2 * b4 + a3 * b6);
		printf("%d %d \n", a4 * b1 + a5 * b3 + a6 * b5, a4 * b2 + a5 * b4 + a6 * b6);
	}
	return 0;
}