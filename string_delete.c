#include<stdio.h>
#include<string.h>

int main()
{   int p,q,c,d,j,len,e;

    char a[20];
    
    printf("Enter string: ");
    scanf("%s",a);
    
    printf("Enter the start point: ");
    scanf("%d",&p);
    printf("Enter the end point: ");
    scanf("%d",&q);

    
    
    c = (q-p)+2;
    d = q+1;

    len = strlen(a);
    
    e = len-c;
    j = p;

    for(int i=d,j=p;a[i]!='\0';i++,j++)
    {
        a[j]=a[i];
        printf("%c\n",a[j]);
    }

    
    for(int i=0;i<=e;i++)
    {
        printf("%c",a[i]);
    }
   
    return 0;
}