#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int price[7] = { 1, 2, 5, 10, 20, 50, 100};
	int p, times, i;
	while(scanf("%d", &p) != EOF)
	{
		times = 0;
		times += p / 100;
		p = p % 100;

		times += p / 50;
		p = p % 50;

		times += p / 20;
		p = p % 20;

		times += p / 10;
		p = p % 10;

		times += p / 5;
		p = p % 5;

		times += p / 2;
		p = p % 2;

		times += p;

		printf("%d\n", times);

	}
	return 0;
}