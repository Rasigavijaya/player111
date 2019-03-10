#include<stdio.h>
void main()
{
    int a[100],n,m,b[100],j=0,k=0,i,t,c=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n+m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n+m;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j]);
            {
                b[k]=a[i];
                k++;
                c++;
               
            }
        } 
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(b[i]>b[j])
            {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
            }
        }
    }
    for(i=0;i<c;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
