#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int main()
{
	int m, n, i, t, tmp, flag;
	while(scanf("%d%d", &m, &n) != EOF)
	{
		scanf("%d", &t);
		flag = 0;
		for(i = 0;i < m * n;i++)
		{
			scanf("%d", &tmp);
			if(tmp == t)
				flag = 1;
		}
		if(flag)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}