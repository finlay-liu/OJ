#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n, i, j, k, m, l, len1, len2, out[10];
	char num1[10], num2[10];
	freopen("sample.txt", "r", stdin);
	while (scanf("%d", &n) != EOF)
	{
		for(l = 0;l < n;l++)
		{
			scanf("%s %s", &num1, &num2);

			len1 = strlen(num1);
			len2 = strlen(num2);
			i = len1 - 1;
			j = len2 - 1;
			k = 9;
			while(i >= 0 || j >= 0)
			{
				if(i >= 0 && j >= 0)
				{
					out[k] = num1[i] - 'a' + num2[j] - 'a';
					i--;
					j--;
					k--;
				}
				else if(i == -1 && j >= 0)
				{
					out[k] = num2[j] - 'a';
					j--;
					k--;
				}
				else if(j == -1 && i >= 0)
				{
					out[k] = num1[i] - 'a';
					i--;
					k--;
				}
			}
			for (m = 9;m >= k;m--)
			{
				if(out[m] > 25)
				{
					out[m - 1]++;
					out[m] = out[m] - 25;
				}
			}
		
			for (m = k + 1;m < 10;m++)
					printf("%c", out[m] + 'a');
			printf("\n");
		}
	}
	
	fclose(stdin);
	return 0;
}