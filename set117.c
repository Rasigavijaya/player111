#include <stdio.h>

int main()
{
    char a[100];
    int c=0,i;
    scanf("%s",&a);
    c=strlen(a);
    for(i=c-1;i>=1;i--)
    {
        printf("%c-",a[i]);
    }
    printf("%c",a[0]);

    return 0;
}
