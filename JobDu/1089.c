// http://ac.jobdu.com/problem.php?pid=1089
#include <stdio.h>

int Reverse(int n)
{
	int i, j, flag, out;
	int num[10];

	if(n <= 0)
		return 0;
	
	i = 0;
	while(n > 0)
	{
		num[i] = n % 10;
		n /= 10;
		i++;
	}

	out = 0;
	flag = 1;
	for(j = i - 1; j >= 0; j--)
	{
		out += flag * num[j];
		flag *= 10;
	}
	return out;
}

int main()
{
	int a, b, n , i;
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0;i < n;i++)
		{
			scanf("%d%d", &a, &b);
			if(Reverse(a) + Reverse(b) == Reverse(a + b))
				printf("%d\n",a + b);
			else
				printf("NO\n");
		}
		
	}
	return 0;
}