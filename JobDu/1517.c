#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int n, k, i;
	int *array;
	while(scanf("%d%d", &n, &k) != EOF)
	{
		array = (int *) malloc (n * sizeof(int));
		for(i = 0;i < n; i++)
			scanf("%d", &array[i]);
		if(n - k < 0 || k == 0)
			printf("NULL\n");
		else
			printf("%d\n", array[n - k]);
		free(array);
	}
	return 0;
}