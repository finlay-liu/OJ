#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int n, i, max;
	while(scanf("%d", &n) != EOF)
	{
		if(n == 1)
			max = 9;
		else if(n == 2)
			max = 99;
		else if(n == 3)
			max = 999;
		else if(n == 4)
			max = 9999;
		else if(n == 5)
			max = 99999;

		for(i = 1;i <= max;i++)
			printf("%d\n", i);
	}
	return 0;
}