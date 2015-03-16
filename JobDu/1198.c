#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	char num1[1010], num2[1010];
	int num3[1010], len1, len2,i , j, index;
	while(scanf("%s%s", &num1, &num2) != EOF)
	{
		memset(num3, 0, sizeof(num3));
		index = 1009;
		len1 = strlen(num1);
		len2 = strlen(num2);
		for(i = len1 - 1, j = len2 - 1;i >= -1, j >= -1;)
		{
			if(i >= 0 && j >= 0)
			{
				num3[index] = (num1[i] - '0') + (num2[j] - '0');
				index--;
				i--;
				j--;
			}
			else if(i == -1 && j >= 0)
			{
				num3[index] += (num2[j] - '0');
				index--;
				j--;
			}
			else if(j == -1 && i >= 0)
			{
				num3[index] += (num1[i] - '0');
				index--;
				i--;
			}
			else if(i == -1 && j == -1)
				break;
		}
		for(i = 1009;i >= 0;i--)
		{
			if(num3[i] >= 10)
			{
				num3[i - 1] += num3[i] / 10;
				num3[i] = num3[i] % 10;
			}
		}

		j = 0;
		for(i = 0;i < 1010;i++)
		{
			if(j == 0 && !num3[i])
				continue;
			else
			{
				j = 1;
				printf("%d", num3[i]);
			}
		}
		if(j == 0)
			printf("0");
		printf("\n");
	}
	return 0;
}