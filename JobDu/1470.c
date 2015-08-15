#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// freopen("sample.txt", "r", stdin);

int array[10][10];

void SwapArray(int a, int b, int N)
{
	int tmp;
	for (int i = 0; i < N; i++)
	{
		tmp = array[a][i];
		array[a][i] = array[b][i];
		array[b][i] = tmp;
	}
}

void PrintArray(int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (j != N - 1)
				printf("%d ", array[i][j]);
			else
				printf("%d\n", array[i][j]);
		}
	}
}

int main()
{
	int N, start, max, i, j;
	// freopen("data.in", "r", stdin);
	while (scanf("%d", &N) != EOF)
	{
		// printf("%d\n", N);
		for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &array[i][j]);

		for (i = 0; i < N - 1; i++)
		{
			max = -1;
			for (start = i; start < N; start++)
				if (array[start][i] > array[max][i])
					max = start;
			
			if (max != -1)
				SwapArray(i, max, N);
			// PrintArray(N);
			// printf("\n");
		}

		PrintArray(N);
	}
	return 0;
}