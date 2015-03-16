#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int n, num, i, j, flag;
	int str[1000]; 
	while(scanf("%d", &n) != EOF)
	{
		for(j = 0;j < n;j++)
		{
			scanf("%d", &num);
			memset(str, 0, sizeof(str));
			i = 499;
			while(num > 0)
			{
				str[i] = num % 2;
				num /= 2;
				i--;
			}
			flag = 0;
			for(i = 0;i < 500;i++)
			{
				if(!flag && str[i] == 0)
					continue;
				else
				{
					flag = 1;
					printf("%d", str[i]);
				}
			}
			if(!flag)
				printf("0");
			printf("\n");
		}
	}
	return 0;
}