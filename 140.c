#include <stdio.h>

void  main() 
{
    char a[1000];
    int i,l,c=0;
    gets(a);
    l=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' || a[i]=='b')
        {
            c++;
        }
    }
    if(c==l)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
