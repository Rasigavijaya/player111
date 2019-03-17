#include<stdio.h>
void main()
{
    int a[10000],i,n,c=0,c1=0,p=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=p*a[i];
    }
        
        if(p%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
}
