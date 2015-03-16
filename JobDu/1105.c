#include "stdio.h"
#include "string.h"
int main()
{
	int i, len;
    char str[100];
    while(gets(str)!=NULL)
    {
        len=strlen(str);
        if(len==1&&str[0]=='!')
            break;
        for(i=0;i<len;i++)
        {
            if(str[i]>='a' && str[i]<='z')
                printf("%c",'z'-(str[i]-'a'));
            else if(str[i]>='A' && str[i]<='Z')
                printf("%c",'Z'-(str[i]-'A'));
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}