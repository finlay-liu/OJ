#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//freopen("sample.txt", "r", stdin);
	int in[100000], len, i;
	len = 0;
	while(scanf("%d", &i))
	{
		if(i == -1)
			break;

		in[len] = i;
		len++;
	}
	for(i = len - 1;i >= 0;i--)
		printf("%d\n", in[i]);
	//fclose(stdin);
	return 0;
}