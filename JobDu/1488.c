#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int i = 0;
	double num1, num2 ,tmp;
	num1 = 0;
	num2 = 0;
	tmp = 1;
	while(i < 30)
	{
		num1 += 10;
		num2 += tmp;
		tmp *= 2;
		i++;
	}
	printf("%.0f %.0f\n", num1, num2);
	return 0;
}