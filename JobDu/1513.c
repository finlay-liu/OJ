#include<stdio.h>
int main()
{
	int t, n, sum;
	unsigned int u;
	scanf("%d", &n);
	while (n--)
	{
		sum = 0;
		scanf("%d", &t);
		u = t;
		while (u){
			if (u & 1)
				sum++;
			u >>= 1;
		}
		printf("%d\n", sum);
	}
	return 0;
}