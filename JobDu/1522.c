#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXLINE 1000000

typedef struct
{
	int data[MAXLINE];
	int index;
}Stack;
Stack s;

int Push(int num)
{
	s.data[s.index] = num;
	s.index--;
}

int Pop()
{
	if(s.index == MAXLINE - 1)
		return;
	s.index++;
}

// freopen("sample.txt", "r", stdin);
int main()
{
	int n, i, j, num, min;
	char ch[20], *tmp;
	while(scanf("%d\n", &n) != EOF)
	{
		s.index = MAXLINE - 1;
		for(i = 0;i < n;i++)
		{
			gets(ch);
			if(ch[0] == 's')
			{
				tmp = strtok(ch, " ");
				tmp = strtok(NULL, " ");
				Push(atoi(tmp));
			}
			else
				Pop();
			if(s.index == MAXLINE - 1)
				printf("NULL\n");
			else
			{
				min = s.data[MAXLINE - 1];
				for(j = MAXLINE - 1;j > s.index; j--)
					if(min >= s.data[j])
						min = s.data[j];
				printf("%d\n", min);
			}
		}
	}
	return 0;
}