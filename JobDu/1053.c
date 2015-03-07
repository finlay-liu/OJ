// http://ac.jobdu.com/problem.php?pid=1053
#include <stdio.h>

int main()
{
	int n, i, maxi, mini, tmp;
	int *array;
	while(scanf("%d", &n) != EOF)
	{
		array = (int *)malloc(n * sizeof(int));
		for(i = 0; i < n; i++)
			scanf("%d",&array[i]);

		maxi = mini = 0;
		for(i = 0; i < n; i++)
		{
			if(array[i] >= array[maxi])
				maxi = i;
			if(array[i] <= array[mini])
				mini = i;
		}

		tmp = array[mini];
		array[mini] = array[maxi];
		array[maxi] = tmp;

		printf("%d",array[0]);
		for(i = 1; i < n; i++)
			printf(" %d",array[i]);
		printf("\n");
		free(array);
	}
	return 0;
}