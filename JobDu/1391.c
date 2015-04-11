#include<stdio.h>

int array[1010][1010];
int main()
{
	int m, n, i, j, flag, index;
	//freopen("sample.txt", "r", stdin);
	while(scanf("%d%d", &m, &n) != EOF)
	{
		for(i = 0;i < 1010;i++)
			for(j = 0;j < 1010;j++)
				array[i][j] = -1;

		for(i = 0;i < m;i++)
			for(j = 0;j < n;j++)
				scanf("%d", &array[i][j]);

		index = 0;
		flag = 1;
		i = j = 0;
		while(index < m * n)
		{
			printf("%d ", array[i][j]);
			index++;
			array[i][j] = -1;
			if(flag == 1)
			{
				if(j == n - 1 || array[i][j + 1] == -1)
				{
					i++;
					flag = 2;
				}
				else
					j++;
			}
			else if(flag == 2)
			{
				if(i == m - 1 || array[i + 1][j] == -1)
				{
					j--;
					flag = 3;	
				}
				else
					i++;
			}
			else if(flag == 3)
			{
				if(j == 0 || array[i][j - 1] == -1)
				{
					i--;
					flag = 4;
				}
				else
					j--;
			}
			else
			{
				if(i == 0 || array[i - 1][j] == -1)
				{
					j++;
					flag = 1;
				}
				else
					i--;
			}
		}
		printf("\n");
	}
	//fclose(stdin);
	return 0;
}