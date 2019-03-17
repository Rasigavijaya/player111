#include <stdio.h>

void  main() 
{
    int a[1000],n,l=0,i,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            l++;
        }
    }
    if(l>0)
    {
        printf("yes %d",l);
    }
    else
    {
        printf("no");
    }
}
