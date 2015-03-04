// http://ac.jobdu.com/problem.php?pid=1003
#include <stdio.h>
#include <string.h>

int main()
{
	int l1, l2, i, index, tmp;
	int num1, num2;
	char A[20],B[20];
	//freopen("1003.in","r",stdin);
	while(1)
	{
		if(scanf("%s",&A) == EOF)
			return 0;
		scanf("%s",&B);

		l1 = strlen(A);
		l2 = strlen(B);
		index = 1;
		num1 = 0;
		for(i = l1 - 1;i >= 0;i--)
		{
			if(A[i] >= '0' && A[i] <= '9')
			{
				tmp = A[i] - '0';
				num1 += index * tmp;
				index *= 10;
			}
			else if(A[i] == '-' && i == 0)
				num1 *= -1;
		}
		//printf("%d\n",num1);

		index = 1;
		num2 = 0;
		for(i = l2 - 1;i >= 0;i--)
		{
			if(B[i] >= '0' && B[i] <= '9')
			{
				tmp = B[i] - '0';
				num2 += index * tmp;
				index *= 10;
			}
			else if(B[i] == '-' && i == 0)
				num2 *= -1;
		}
		printf("%d\n",num1 + num2);
	}
	//fclose(stdin);
	return 0;
}