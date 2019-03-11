#include <stdio.h>
void main()
{
    int n,i,j,f;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                printf("%d ",i);
            }
        }
    }
}
