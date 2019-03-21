#include <stdio.h>

int main()
{
    int a,b,f=1,i,j,k=1,res;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    for(j=1;j<=b;j++)
    {
        k=k*j;
    }
    res=f/k;
    printf("%d",res);
    return 0;
}
