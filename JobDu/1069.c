// http://ac.jobdu.com/problem.php?pid=1069
#include <stdio.h>
#include <string.h>
int main()
{
	int n, m, i, j;
	char no[1000][100], name[1000][100], sex[1000][5];
	int age[1000];
	char tmp[100];
	//freopen("sample.txt", "r", stdin);
	while(scanf("%d",&n) != EOF)
	{
		for(i = 0;i < n;i++)
			scanf("%s%s%s%d", no[i], name[i], sex[i], &age[i]);

		scanf("%d",&m);
		
		for(i = 0;i < m;i++)
		{
			scanf("%s",tmp);
			for(j = 0;j < n;j++)
			{
				if(!strcmp(tmp, no[j]))
				{
					printf("%s %s %s %d\n",no[j], name[j], sex[j], age[j]);
					break;
				}
				else if(j == n - 1)
					printf("No Answer!\n");
			}
		}
	}
	//fclose(stdin);
	return 0;
}