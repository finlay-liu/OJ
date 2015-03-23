#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
	int data;
	int times;
}Num;
Num num[100010];

int AddNum(int a, int n)
{
	int i;
	for(i = 0; i < n;i++)
	{
		if(num[i].data == 0)
		{
			num[i].data = a;
			num[i].times++;
			break;
		}
		else if(num[i].data == a)
		{
			num[i].times++;
			break;
		}
	}
}

// freopen("sample.txt", "r", stdin);
int main()
{
	int n, i, tmp, flag;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0;i < n;i++)
		{
			num[i].times = 0;
			num[i].data = 0;
		}
		for(i = 0;i < n;i++)
		{
			scanf("%d", &tmp);
			AddNum(tmp, n);
		}
		flag = 0;
		for(i = 0;i < n;i++)
		{
			if(num[i].times > n / 2)
			{
				printf("%d\n",num[i].data);
				flag = 1;
				break;
			}
		}
		if(!flag)
			printf("-1\n");
	}
	return 0;
}