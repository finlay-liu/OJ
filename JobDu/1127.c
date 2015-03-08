// http://ac.jobdu.com/problem.php?pid=1127
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char *end = "ENDOFINPUT";
	char line[300];
	int i, len;
	//freopen("sample.txt", "r", stdin);
	while(gets(line))
	{
		len = strlen(line);
		if(len == 10 && ! strcmp(line, end))
			return 0;

		gets(line);
		len = strlen(line);
		for(i = 0;i < len;i++)
		{
			if(line[i] >= 'F' &&  line[i] <= 'Z')
				line[i] = line[i] - 5;
			else if(line[i] == 'A')
				line[i] = 'V';
			else if(line[i] == 'B')
				line[i] = 'W';
			else if(line[i] == 'C')
				line[i] = 'X';
			else if(line[i] == 'D')
				line[i] = 'Y';
			else if(line[i] == 'E')
				line[i] = 'Z';
		}
		printf("%s\n", line);
		gets(line);
	}
	//fclose(stdin);
	return 0;
}