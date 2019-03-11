#include <stdio.h>

int main()
{
    int n,bin=0,t=1,r,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        bin=t*r+bin;
        n=n/2;
        t=t*10;
    }
    while(bin)
    {
        bin=bin/10;
        c++;
    }
    printf("%d",c);
    return 0;
}
