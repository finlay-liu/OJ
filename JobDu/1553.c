#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int n1,n2;
	double c1, c2, out;
	while(scanf("%d:%d", &n1, &n2) != EOF)
	{
		c1 = n1 * 30.0 + n2 / 2.0;
		c2 = n2 * 6.0;
		out = c1 - c2;
		if(out < 0)
			out = -out;
		if(out > 360)
			out -= 360;
		if(out > 180)
			out = 360 - out;
		printf("%0.2f\n", out);
	}
	return 0;
}