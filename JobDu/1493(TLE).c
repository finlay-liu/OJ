#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int a, b, min, i, out;
	while(scanf("%d%d", &a, &b) != EOF)
	{
		out = 0;
		if(a >= b)
			min = b;
		else
			min = a;
		for(i = 1;i <= min;i++)
			if(a % i == 0 && b % i == 0)
				out++;
		printf("%d\n", out);
	}
	return 0;
}