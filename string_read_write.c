#include<stdio.h>
struct string
{
    char str[11];
};
int main()
{
    struct string s[5];
    printf("Enter five strings:\n");
    for(int i=0;i<5;i++)
    {
        scanf(" %s",s[i].str);
    }
    printf("The strings are as follows:\n");
    for(int i=0;i<5;i++)
    {
        printf("%s\n",s[i].str);
    }
    return 0;
}