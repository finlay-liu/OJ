// http://ac.jobdu.com/problem.php?pid=1098
#include <stdio.h>
#include <string.h>

int main()
{
	char line[1000];
	int times[26], len, i;
	while(scanf("%s", &line) != EOF)
	{
		memset(times, 0, sizeof(int) * 26);
		len = strlen(line);

		for(i = 0;i < len; i++)
		{
			if(line[i] >= 'A' && line[i] <= 'Z')
				times[(int)(line[i] - 'A')]++;
		}

		for(i = 0;i < 26;i++)
			printf("%c:%d\n", 'A' + i, times[i]);
	}
	return 0;
}