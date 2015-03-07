// http://ac.jobdu.com/problem.php?pid=1052
#include <stdio.h>

int main()
{
	int n, i, num, index;
	int *array;
	while(scanf("%d",&n) != EOF)
	{
		array = (int *)malloc(n * sizeof(int));
		for(i = 0; i < n; i++)
			scanf("%d",&array[i]);

		scanf("%d",&num);
		
		index = -1;
		for(i = 0; i < n; i++)
			if(array[i] == num)
				index = i;
		free(array);
		printf("%d\n",index);
	}
	return 0;
}