#include<stdio.h>


int main()
{
    int a[10000],i,j,n,b[10000],k=0,m[100],c[100],l=0,t,v=0,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        v=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
             v++;
             a[j]='\0';
            }
        }
        if(a[i]!='\0')
        {
        m[k]=a[i];
        b[k]=v;
        k++;
        }
    }
    s=0;
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(b[i]==b[j])
            {
                c[l]=m[i];
                l++;
                c[l]=m[j];
                l++;
                b[i]='\0';
            }
        }
        if(j==k)
        {
            a[s]=m[i];
            s++;
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(c[i]<c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
        printf("%d ",c[i]);
    }
    printf("%d",a[0]);
    return 0;
    
    
    
}
