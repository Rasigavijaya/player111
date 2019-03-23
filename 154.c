#include<stdio.h>
    void main()
    {
        char a[100];
        int i,k,l=0,x;
        scanf("%s",&a);
        scanf("%d",&k);
        l=strlen(a);
        for(i=k-1;i<l;i=i+k)
        {
            if(a[i]>=97 && a[i]<=122)
            {
            a[i]=a[i]-32;
            }
        }
        printf("%s",a);
    }
