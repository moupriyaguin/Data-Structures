#include<stdio.h>
#include<stdlib.h>
struct employee
{
    char *name;
    int dd;
    int mm;
    int yy;
    float salary;
};
int main()
{
    int n;
    printf("Enter number of employee:");
    scanf("%d",&n);
    struct employee e[n];
    for(int i=0;i<n;i++)
    {
        e[i].name = malloc(20*sizeof(char));
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter employee name: ");
        scanf("%s",e[i].name);
        printf("Enter date of joining: ");
        scanf("%d/%d/%d",&e[i].dd,&e[i].mm,&e[i].yy);
        printf("Enter salary: ");
        scanf("%f",&e[i].salary);
    }
    printf("Name\tDate of Joining Salary\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t",e[i].name);
        printf("%d/%d/%d\t",e[i].dd,e[i].mm,e[i].yy);
        printf("%f",e[i].salary);
        printf("\n");
    }
    return 0;
}