#include<stdio.h>

void main()
{
    char a[100],b[100],c1[100];
    int i,j,k;
    gets(a);
    gets(b);
    j=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[j])
        {
            a[i]='$';
            j++;
        }
    }
    k=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='$')
        {
            c1[k]=a[i];
            k++;
        }
    }
    c[k]='\0';
    
    printf("%s",c1);
   
}
