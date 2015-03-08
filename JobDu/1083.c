// http://ac.jobdu.com/problem.php?pid=1083
#include <stdio.h>

int main()
{
	int num1, num2, len1, len2, i, j, out;
	int wei1[10], wei2[10];
	while(scanf("%d%d", &num1, &num2) != EOF)
	{
		len1 = 0;
		while(num1 > 0)
		{
			wei1[len1] = num1 % 10;
			num1 /= 10;
			len1++;
		}

		len2 = 0;
		while(num2 > 0)
		{
			wei2[len2] = num2 % 10;
			num2 /= 10;
			len2++;
		}
		out = 0;
		for(i = 0;i < len1;i++)
		{
			for(j = 0;j < len2;j++)
			{
				out += wei1[i] * wei2[j];
			}
		}
		printf("%d\n", out);
	}
	return 0;
}