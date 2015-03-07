// http://ac.jobdu.com/problem.php?pid=1057
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num[20], index[10], i, max;
	//freopen("sample.txt","r",stdin);
	while(scanf("%d",&num[0]) != EOF)
	{
		for(i = 1;i < 20; i++)
			scanf("%d",&num[i]);

		for(i = 0;i < 10; i++)
			index[i] = 0;

		for(i = 0;i < 20; i++)
			index[num[i] - 1]++;

		max = 0;
		for(i = 0;i < 10; i++)
		{
			if(index[i] > index[max])
				max = i;
			else if(index[i] == index[max])
			{
				if(i <= max)
					max = i;
			}
		}
		printf("%d\n",max + 1);
	}
	//fclose(stdin);
	return 0;
}