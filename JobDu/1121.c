// http://ac.jobdu.com/problem.php?pid=1121
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int i, len;
	char line[101];
	//freopen("sample.txt", "r", stdin);
	while(gets(line))
	{
		len = strlen(line);
		if( isalpha(line[0]) )
			line[0] = toupper(line[0]);
		for(i = 1;i < len; i++)
		{
			if(line[i - 1] == ' ' || line[i - 1] == '\t' || line[i - 1] == '\r' || line[i - 1] == '\n')
				line[i] = toupper(line[i]);
		}
		printf("%s\n",line);
	}
	//fclose(stdin);
	return 0;
}