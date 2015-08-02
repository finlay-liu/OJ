#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int answer[92][8];
int x[8];

int place(int k)//考察皇后k放置在x[k]列是否发生冲突
{
    int i;
    for(i = 1; i < k; i++)
        if(x[k] == x[i] || abs(k - i) == abs(x[k] - x[i]))
            return 0;
    return 1;
}

void queue()
{
    int i, k, j;
    for(i = 1; i <= 8; i++)
        x[i] = 0;
    k = 1;
    j = 0;
    while(k >= 1)
    {
        x[k] = x[k] + 1; //在下一列放置第k个皇后
        while(x[k] <= 8 && !place(k))
            x[k] = x[k] + 1; //搜索下一列
        if(x[k] <= 8 && k == 8) //得到一个输出
        {
            for(i = 1; i <= 8; i++)
                answer[j][i - 1] = x[i];
            j++;
            //return;
            //若return则只求出其中一种解，若不return则可以继续回溯，求出全部的可能的解
        }
        else if(x[k] <= 8 && k < 8)
            k = k + 1; //放置下一个皇后
        else
        {
            x[k] = 0; //重置x[k],回溯
            k = k - 1;
        }
    }
}

void print(int k)
{
	int i;
	for(i = 0; i < 8; ++i)
		printf("%d", answer[k][i]);
	printf("\n");
}

int main()
{
	int n, i, j;
	queue();
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; ++i)
		{
			scanf("%d", &j);
			print(j - 1);
		}
	}
}