#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char data[101];
char input[101];

void Reverse(int start, int end);
void Replace(int start, int len);

int main()
{
	int n, i;
	char msg, start, end, len;
	freopen("data.in", "r", stdin);
	while(scanf("%s", &data) != EOF)
	{
		scanf("%d\n", &n);
		for(i = 0; i < n; i++)
		{
			msg = getchar();
			while(msg == '\n') msg = getchar();
			if(msg == '0')
			{
				start = getchar();
				end = getchar();
				Reverse(start - '0', end - '0');
			}
			else
			{
				start = getchar();
				len = getchar();
				// printf("%c %c\n", start, len);
				scanf("%s", &input);
				Replace(start - '0', len - '0');
			}
			if(data[0] != '\n')
				printf("%s\n", data);
		}
	}
	return 0;
}

void Reverse(int start, int end)
{
	char tmp;
	int mid = (start + end) / 2;
	for(int i = start; i < mid; i++)
	{
		tmp = data[i];
		data[i] = data[end - start - i - 1]; 
		data[end - start - i - 1] = tmp;
	}
}

void Replace(int start, int len)
{
	for(int i = 0; i < len; i++)
		data[start + i] = input[i];
	//data[start + len] = '\n';
}