#include <stdio.h>
#include <string.h>

int Digital(int num)
{
	int sum = 0;
	while(num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main()
{
	char num[10000];
	int sum, i;
	while(scanf("%s", &num) != EOF)
	{
		if(strlen(num) == 1 && num[0] == '0')
			return;

		sum = 0;
		for(i = 0;i < strlen(num); i++)
			sum += num[i] - '0';

		while(sum >= 10)
			sum = Digital(sum);

		printf("%d\n", sum);
	}
	return 0;
}