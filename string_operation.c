#include<stdio.h>
void reverse(char *p)
{
    int temp;
    for(int i=0,j=9;i<j;i++,j--)
    {
        temp = p[j];
        p[j] = p[i];
        p[i] = temp;
    }
}
void identical(char *p , char *q)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(p[i]!=q[i])
        {
            printf("The strings are not identical\n");
            break;
        }
    }
    if(i==10)
    printf("The strings are identical\n");
}
void empty(char *p)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(p[i]!=' ' || p[i]!= '\0')
        {
            printf("The string is not empty\n");
            break;
        }
    }
    if(i==11)
    printf("The string is empty\n");
}
int main()
{
    char a[10],b[10];
    printf("Enter a string: ");
    scanf("%s",a);
    printf("Enter another string: ");
    scanf(" %s",b);

    empty(a);
    empty(b);

    identical(a,b);

    reverse(a);
    reverse(b);

    for(int i=0;i<10;i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        printf("%c",b[i]);
    }
    return 0;
}