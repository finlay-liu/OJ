#include <stdio.h>
#include <stdlib.h>
// freopen("sample.txt", "r", stdin);

int num1[2002], num2[2002];

int main()
{
	int N1, N2, i, tmp1, tmp2, flag;
	// freopen("data.in", "r", stdin);
	while(scanf("%d", &N1) != EOF)
	{
		for(i = 0; i < 2002; i++)
		{
			num1[i] = 0;
			num2[i] = 0;
		}

		for(i = 0; i < N1; i++)
		{
			scanf("%d %d", &tmp1, &tmp2);
			num1[tmp2 + 1000] = tmp1;
		}

		scanf("%d", &N2);
		for(i = 0; i < N2; i++)
		{
			scanf("%d %d", &tmp1, &tmp2);
			num2[tmp2 + 1000] = tmp1; 
		}

		for(i = 0; i < 2002; i++)
			num1[i] += num2[i];

		flag = -1;
		for(i = 2000; i >= 0; i--)
		{
			if(num1[i] != 0)
			{
				if(flag == -1)
					printf("%d %d", num1[i], i - 1000);
				else
					printf(" %d %d", num1[i], i - 1000);
				flag = 1;
			}
		}
		printf("\n");
	}
	return 0;
}