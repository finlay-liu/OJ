// http://ac.jobdu.com/problem.php?pid=1129
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mi(int i)
{
	int tmp = 1, j;
	for(j = 0;j < i;j++)
		tmp *= 2;
	return tmp;
}

int main()
{
	int len, i, out;
	char line[500];
	//freopen("sample.txt", "r", stdin);
	while(gets(line))
	{
		out =0;
		len = strlen(line);
		for(i = 0;i < len;i++)
			out += (int)(line[i] - '0') * ( mi(len - i) -1);
		if(out == 0)
			return 0;
		printf("%d\n", out);
	}
	//fclose(stdin);
	return 0;
}