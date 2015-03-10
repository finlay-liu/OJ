#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int RunYear(int year)
{
    if(year % 4 == 0 && year % 100 != 0)
        return 1;
    else if(year % 400 ==0)
        return 1;
    else
        return 0;
}

// freopen("sample.txt", "r", stdin);
int main()
{
	int i;
	int year, day;
	int mday[] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	while(scanf("%d%d", &year, &day) != EOF)
	{
		if( RunYear(year) )
			mday[1] = 29;
		else
			mday[1] = 28;

		for(i = 0;i < 12;i++)
		{
			if(mday[i] >= day)
			{
				printf ("%.4d-%.2d-%.2d\n", year, i + 1, day);
				break;
			}
			else
				day -= mday[i];
		}
	}
	return 0;
}