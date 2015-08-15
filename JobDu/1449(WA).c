#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int main()
{
	int array[502], N, M, num1, num2;
	freopen("data.in", "r", stdin);
	while(scanf("%d %d", &N, &M) != EOF)
	{
		for(int i = 0; i <= 501; i++)
			array[i] = i;

		for(int i = 0;i < M; i++)
		{
			scanf("%d %d", &num1, &num2);
			if(num1 < num2) continue;
			int tmp = array[num1];
			array[num1] = array[num2];
			array[num2] = tmp;
		}

		for(int i = 1; i <= N; i++)
		{
			if(i != N)
				printf("%d ", array[i]);
			else
				printf("%d\n", array[i]);
		}
	}
	return 0;
}