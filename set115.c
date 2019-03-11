#include <stdio.h>

int main()
{
    char s[100],m[100];
    int i,c=0,c1=0;
    scanf("%s",&s);
    scanf("%s",&m);
    c=strlen(s);
    c1=strlen(m);
    if(c==c1)
    {
        printf("%s%s",s,m);
    }
    else
    {
        if(c>c1)
        {
            for(i=0;i<c1;i++)
            {
                printf("%c%c",s[i],m[i]);
            }
        }
        else
        {
             for(i=0;i<c;i++)
            {
                printf("%c%c",s[i],m[i]);
            }
        }
    }
    return 0;
}
