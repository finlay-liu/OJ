#include<stdio.h>
#include<string.h>

int main()
{
    int num = 0;
    while(scanf("%d", &num) != EOF)
    {
        int max = 0, val = 0;;
        int data[100002];
        memset(data, 0, sizeof(data));
        if(num < 1 || num > 100000) return 0;
        for (int i = 0; i < num; i++)
            scanf("%d", &data[i]);
        max = 1;
        val = data[0];
        for(int i = 1; i < num; i++)
        {
            if(data[i] == val)
                max ++;
            else
                max --;
            if(max == 0)
            {
                max = 1;
                val = data[i];
            }
        }
        max = 0;
        for(int j = 0; j < num; j++)
            if(data[j] == val)
                max ++;
        if(max > num / 2)
            printf("%d\n", val);
        else
            printf("-1\n");
    }
    return 1;
}