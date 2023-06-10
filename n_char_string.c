#include<stdio.h>
struct string
{
    char str[11];
};
int main()
{
    int a;
    printf("Enter the number of characters: ");
    scanf("%d",&a);

    struct string s[a];
    printf("Enter five strings:\n");
    for(int i=0;i<a;i++)
    {
        scanf(" %s",s[i].str);
    }
    printf("The strings are as follows:\n");
    for(int i=0;i<a;i++)
    {
        printf("%s\n",s[i].str);
    }
    return 0;
}