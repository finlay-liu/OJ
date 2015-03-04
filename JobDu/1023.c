// http://ac.jobdu.com/problem.php?pid=1032
#include <stdio.h>
#include <string.h>

int main()
{
	int iz, io, ij, i;
	char input[100];
	while(scanf("%s",&input))
	{
		iz = io = ij = 0;
		if(strlen(input) == 1 && input[0] == 'E')
			return 0;
		
		for(i = 0;i < strlen(input); i++)
		{
			if(input[i] == 'Z')
				iz++;
			else if(input[i] == 'O')
				io++;
			else if(input[i] == 'J')
				ij++;
		}
		
		i = 0;
		while(iz != 0 || io != 0 || ij != 0)
		{
			if(i == 0 && iz > 0)
			{
				iz--;
				printf("Z");
				i++;
			}
			else
				i++;

			if(i == 1 && io > 0)
			{
				io--;
				printf("O");
				i++;
			}
			else
				i++;

			if(i == 2 && ij > 0)
			{
				ij--;
				printf("J");
				i = 0;
			}
			else
				i = 0;
		}
		printf("\n");
	}
}