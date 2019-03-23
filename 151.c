#include<stdio.h>

int main()
{
    char a[100];
    int i,j=0,l=0;
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='b')
        {
            j++;
        }
    }
    if(j==l)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
