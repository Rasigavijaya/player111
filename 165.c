#include <stdio.h>

int main()
{
    int a[100],n,i,k,f=0,p;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
         if(a[i]>k)
            {
                p=a[i];
                f=0;
                break;
            }
    }
    if(f==0)
    {
        printf("%d",p);
    }
        
    return 0;
}
