#include <stdio.h>

void  main() 
{
    int n,bin=0,i=0,r,p=1,r1=0;
    scanf("%d",&n);
    r=n;
    for(i=0;i<=n/2;i++)
    {
        r1=0;
        p=p*2;
            if(p==r)
            {
                printf("yes");
                break;
            }
           
            else
            {
               // printf("no");
                r1=1;
            }
       
    }
    if(r1==1)
    {
        printf("no");
    }
    
    
}
