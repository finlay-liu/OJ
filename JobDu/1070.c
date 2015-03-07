// http://ac.jobdu.com/problem.php?pid=1070
#include <stdio.h>

int RunYear(int year)
{
	if(year % 4 == 0 && year % 100 != 0)
		return 1;
	else if(year % 400 ==0)
		return 1;
	else
		return 0;
}

int main()
{
	int year, month, day, out, i;
	int mday[] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	while(scanf("%d%d%d", &year, &month, &day) != EOF)
	{
		out = 0;
		if(RunYear(year))
			mday[1] = 29;
		else
			mday[1] = 28;

		for(i = 0;i < month - 1;i++)
			out += mday[i];
		out += day;
		printf("%d\n",out);
	}
	return 0;
}