#include<stdio.h>
void main()
{
    int n,i,r,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2!=0)
        {
            s=s+r;
        }
        n=n/10;
    }
        if(s%2==0)
        {
            printf("E");
        }
        else
        {
            printf("O");   
        }
}
