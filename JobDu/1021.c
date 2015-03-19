#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int i, j, time[10];
	char line1[10], line2[100];
	while(gets(line1))
	{
		if(!strcmp(line1, "#"))
			return 0;
		gets(line2);
		memset(time, 0, sizeof(int) * 10);
		for(i = 0;i < strlen(line1); i++)
		{
			for(j = 0;j < strlen(line2); j++)
			{
				if(line1[i] == line2[j])
					time[i]++;
			}
		}
		for(i = 0;i < strlen(line1); i++)
			printf("%c %d\n", line1[i], time[i]);
	}
	return 0;
}