#include <stdio.h>
#include<string.h>

int main()
{   int len1,len2;
    int p,t;

    char a[20];
    char b[20];

    printf("Enter a string: ");
    scanf("%s",a);

    printf("Enter another string: ");
    scanf(" %s",b);

    printf("Enter the position where you want to insert the string: ");
    scanf("%d",&p);

    len1 = strlen(a);

    len2 = strlen(b);


    for(int i = len1-1;i>=p;i--)
    {
       a[i+len2]=a[i];

    }

    for(int i=p,j=0;i<p+len2;i++,j++)
    {
        a[i]=b[j];
    }

    t = (len2+len1)-1;

    for(int i=0;i<=t;i++)
    {
        printf("%c",a[i]);
    }
    
    return 0;
}