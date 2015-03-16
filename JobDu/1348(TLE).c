#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int n, i, j;
	double out;
	int *array;
	//freopen("sample.txt","r",stdin);
	while(scanf("%d", &n) != EOF)
	{
		out = 0;
		array = (int *)malloc(n * sizeof(int));
		for(i = 0;i < n;i++)
			scanf("%d", &array[i]);
		for(i = 0;i < n;i++)
			for(j = i + 1;j < n;j++)
				if(array[i] > array[j])
					out = out + 1;
		printf("%.0f\n", out);
		free(array);
	}
	return 0;
}