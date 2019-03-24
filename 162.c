#include <stdio.h>

int main()
{
    char a[100][100],b[100];
    int n,i,j,c=0,s=0,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    strcpy(b,a[k-1]);
            for(j=0;b[j]!='\0';j++)
            {
                if((b[j]=='a' ||b[j]=='e' ||b[j]=='i' ||b[j]=='o' ||b[j]=='u')||(b[j]=='A' ||b[j]=='E' ||b[j]=='I' ||b[j]=='O' ||b[j]=='U'))
                {
                    c++;
                }
            }
        
    if(c>=1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
