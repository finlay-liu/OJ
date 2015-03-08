// http://ac.jobdu.com/problem.php?pid=1134
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int n, i, j, len;
	char line[100];
	//freopen("sample.txt", "r", stdin);
	while(scanf("%d\n", &n) != EOF)
	{
		for(i = 0;i < n;i++)
		{
			gets(line);
			len = strlen(line);
			for(j = 0;j < len;j++)
			{
				if(isalpha(line[j]) && line[j] == 'z')
					line[j] ='a';
				else if(isalpha(line[j]) && line[j] == 'Z')
					line[j] ='A';
				else if(isalpha(line[j]))
					line[j]++;
			}
			printf("%s\n", line);
		}
	}
	//fclose(stdin);
	return 0;
}