#include <stdio.h>

int stack[11000];
int esp;

void push(int d)
{
    stack[++esp] = d;
}

void pop()
{
    if(esp >= 0)
        esp--;
}

void access()
{
    if(esp < 0)
        printf("E\n");
    else
        printf("%d\n", stack[esp]);
}

int main()
{

    int n;
    while(scanf("%d", &n) != EOF && n > 0)
    {
        int dt;
        char op;
        getchar();
        esp = -1;
        while(n--)
        {
            scanf("%c", &op);
            getchar();
            switch(op)
            {
            case 'A':
                access();
                break;
            case 'O':
                pop();
                break;
            case 'P':
                scanf("%d", &dt);
                getchar();
                push(dt);
                break;
            }
        }
        printf("\n");
    }
    return 0;
}