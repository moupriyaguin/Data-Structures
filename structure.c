#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int class;
};

int main()
{
    int n,t=1;
    printf("n = ");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("Name of student %d: ",t);
        scanf(" %[^\n]s",s[i].name);
        printf("Class: ");
        scanf("%d",&s[i].class);
        printf("Roll: ");
        scanf("%d",&s[i].roll);
        t++;
    }
    t=1;
    printf("Name\t\tClass\tRoll\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t",s[i].name);
        printf("%d\t",s[i].class);
        printf("%d",s[i].roll);
        printf("\n");
        t++;
    }   
    return 0;
}