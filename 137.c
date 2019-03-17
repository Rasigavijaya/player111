#include <stdio.h>

void  main() 
{
    int n,bin=0,i=0,r,p=1,r1=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        bin=r*p+bin;
        n=n/2;
        p=p*10;
    }
    while(bin>0)
    {
        i++;
        r1=bin%10;
        if(r1==1)
        {
            printf("%d",i);
            break;
        }
        bin=bin/10;
    }
}
