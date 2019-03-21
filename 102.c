#include<stdio.h>
void main()
{
int n,i,j,t,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
t=a[0];
a[n-1]=a[0];
a[n-1]=t;
for(i=0;i<n;i++)
{
if(a[i]<a[i+1])
{
sum=sum+a[i+1];
}
}
printf("%d",sum);
}
