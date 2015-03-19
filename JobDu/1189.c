#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int a[30], i, flag, step;
	flag = 21;
	step = 0;
	for(i = 1;i <= 21; i++)
            a[i] = 1;
	while(flag != 1)
	{
		for(i = 1;i <= 21;i++)
		{
			if(a[i] == 1)
				step++;

			if(step == 17)
			{
				step = 0;
				a[i] = 0;
				flag--;
			}
		}
	}
	for(i = 1;i <= 21;i++)
		if(a[i])
			printf("%d\n", i);
	return 0;
}