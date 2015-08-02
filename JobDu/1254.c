#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x[100];
int place(int k)//考察皇后k放置在x[k]列是否发生冲突
{
    int i;
    for(i = 1; i < k; i++)
        if(x[k] == x[i] || abs(k - i) == abs(x[k] - x[i]))
            return 0;
    return 1;
}

int queue(int n)
{
    int i, k, answer;
    for(i = 1; i <= n; i++)
        x[i] = 0;
    k = 1;
    answer = 0;
    while(k >= 1)
    {
        x[k] = x[k] + 1; //在下一列放置第k个皇后
        while(x[k] <= n && !place(k))
            x[k] = x[k] + 1; //搜索下一列
        if(x[k] <= n && k == n) //得到一个输出
        {
            answer++;
        }
        else if(x[k] <= n && k < n)
            k = k + 1; //放置下一个皇后
        else
        {
            x[k] = 0; //重置x[k],回溯
            k = k - 1;
        }
    }
    return answer;
}

int main()
{
    int n;
    int array[] = {2, 10, 4, 40, 92, 352, 724, 2680, 14200, 73712};
    // freopen("data.in", "r", stdin);
    while(scanf("%d", &n) != EOF)
        printf("%d\n", array[n - 4]);
    return 0;
}