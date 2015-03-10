#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int a, b, tmp;
	while(scanf("%d%d", &a, &b) != EOF)
	{
		if(a > b)
			tmp = a;
		else
			tmp = b;
		while(tmp % a != 0 || tmp % b != 0)
			tmp++;
		printf("%d\n", tmp);
	}
	return 0;
}