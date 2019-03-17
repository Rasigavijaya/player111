#include <stdio.h>

void  main() 
{
    int a[1000],n,b[1000],l,r,n1,j=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n1=n;
    if(n1%2==0)
    {
        n1=n1/2;
    }
    else
    {
        n1=(n1-1)/2;
    }
    for(i=n1-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=n-1;i>=n1;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

}
