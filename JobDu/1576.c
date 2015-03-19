#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int n, k, i;
	while(scanf("%d", &n) != EOF)
	{
		if(n == 0)
			return 0;
		k = 0;
		for(i = 2;i * i < n;i++)
			if(n % ( i * i ) == 0)
				k = 1;
		if(k)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}