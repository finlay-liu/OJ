#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	char l1[110], l2[110];
	int i, j, len1, len2;
	while(scanf("%s%s", l1, l2) != EOF)
	{
		len1 = strlen(l1);
		len2 = strlen(l2);
		i = 0;
		j = len2 - 1;
		while(i != len1 || j != -1)
		{
			if(i != len1 && j != -1)
			{
				printf("%c%c", l1[i], l2[j]);
				i++;
				j--;
			}
			else if(i == len1)
			{
				printf("%c", l2[j]);
				j--;
			}
			else 
			{
				printf("%c", l1[i]);
				i++;
			}
		}
		printf("\n");
	}
	return 0;
}