#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	char l1[5000], l2[5000];
	while(scanf("%s%s", l1, l2) != EOF)
	{
		printf("%s%s\n", l1, l2);
	}
	return 0;
}