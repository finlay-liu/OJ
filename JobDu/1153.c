#include <stdio.h>
#include <string.h>

char input[101], output[101];
int main()
{
    while(scanf("%s", input) != EOF)
    {
        memset(output, 0, sizeof(output));
        int l = 0, r = 0;
        int len = strlen(input);
        int i;
        
        for(i = 0; i < len; ++i)
        {
            output[i] = ' ';
            if(input[i] == ')')
            {
                if(l <= 0)
                    output[i] = '?';
                else
                    l--;
            }
            else if(input[i] == '(')
                l++;
        }

        l = r = 0;
        for(i = len; i >= 0; --i)
        {
            if(input[i] == '(')
            {
                if(r <= 0)
                    output[i] = '$';
                else
                    r--;
            }
            else if(input[i] == ')')
                r++;
        }

        printf("%s\n%s\n", input, output);
    }
    return 0;
}
