#include "stdio.h"
#include "string.h"
#define MAX 1001

int main()
{
	double stack[MAX], result;
	char ch1, ch2;
	int tail, i, a;
     
    while(scanf("%d ", &a) && a != 0)
    {
		tail = 0;
		stack[++tail] = 1.0 * a;
        while(scanf("%c %d%c", &ch1, &a, &ch2) != EOF)
        {
            if(ch1 == '+')
                stack[++tail] = 1.0 * a; //push
            else if(ch1 == '-')
                stack[++tail] = -1.0 * a; //push neg
            else if(ch1 == '*')
                stack[tail] = stack[tail] * a; //update tail
            else if(ch1 == '/')
                stack[tail] = stack[tail] / (double)a; //updata tail
            if(ch2 != ' ')
				break;
        }
		result = 0;
        for(i = 1; i <= tail; i++)
			result += stack[i];
		printf("%.2lf\n", result);
    }
    return 0;
}