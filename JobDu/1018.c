#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// freopen("sample.txt", "r", stdin);
int main()
{
	int N, i, tmp, index;
	int *array;
	while(scanf("%d", &N) != EOF)
	{
		if(N == 0)
			return 0;
		array = (int *)malloc(N * sizeof(int));
		for(i = 0;i < N;i++)
			scanf("%d", &array[i]);
		scanf("%d", &tmp);
		index = 0;
		for(i = 0;i < N;i++)
		{
			if(array[i] == tmp)
				index++;
		}
		printf("%d\n", index);
		free(array);
	}
	return 0;
}