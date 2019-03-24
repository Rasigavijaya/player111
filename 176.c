#include <stdio.h>

int main(void) 
{
	char s1[30],s2[30];
	int i,j,flag=0,l1,l2;
	scanf("%s %s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1!=l2)
	{
		printf("false");
	}
	else
	{
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=0;s2[j]!='\0';j++)
		{
			if(s1[i]==s2[j])
			{
				flag=1;
			}
			
		}
	}
	if(flag==1)
	{
		printf("true");
	}
	if(flag==0)
	{
		printf("false");
		
	}
	}
	return 0;
}
