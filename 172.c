#include<stdio.h>

int main()
{
    int n,a1[100],i,j,k=0,t;
    scanf("%d",&n);
    while(n)
    {
        a1[k]=n%10;
        n=n/10;
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a1[i]<a1[j])
            {
                t=a1[i];
                a1[i]=a1[j];
                a1[j]=t;
            }
        }
        printf("%d",a1[i]);
    }
    
    return 0;
}
