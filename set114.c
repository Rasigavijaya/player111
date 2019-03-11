#include <stdio.h>

int main()
{
    long int a,b,c,res=0,x=1,i;
    scanf("%ld %ld %ld",&a,&b,&c);
    for(i=1;i<=b;i++)
    {
        x=x*a;
    }
    res=x%c;
    printf("%ld",res);
    return 0;
}
