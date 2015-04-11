#include <stdio.h>
#include <string.h>

int main()
{
	int stack[100010], n, i, index;
	char word[10];
	while(scanf("%d", &n) != EOF)
	{
		index = 0;
		for(i = 0;i < n;i++)
		{
			scanf("%s", &word);
			if(!strcmp(word, "PUSH"))
			{
				scanf("%d", &stack[index]);
				index++;
			}
			else if(!strcmp(word, "POP"))
			{
				if(index == 0)
					printf("-1\n");
				else
				{
					index--;
					printf("%d\n", stack[index]);
				}
			}
		}
	}
}