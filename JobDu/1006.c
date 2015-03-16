#include <stdio.h>
#include <string.h>
char s[1001];
int main()
{
    int a, b, c;
    char *p;
    while(scanf("%s", s) != EOF)
    {
        if(!strcmp(s, "zoj"))
        {
            printf("Accepted\n"); 
            continue;
        }

        a = b = c = 0;
        p = s;
        while(*p == 'o')
        {
            a++;    
            p++;
        }
        if(*p == 'z')
        {
            p++;
            while(*p == 'o')
            {
                b++;    
                p++;
            }
            if(*p == 'j')
            {
                p++;
                while(*p == 'o')
                {
                    c++;
                    p++;
                }
                if(!(*p) && b > 0 && c == a * b)
                {
                    printf("Accepted\n");
                    continue;
                }
            }
        }
        printf("Wrong Answer\n");
    }
    return 0;
}