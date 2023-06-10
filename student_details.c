#include<stdio.h>
#include<stdlib.h>
struct student
{
   char *name;
   int class;
   int roll;
};
int main()
{
    struct student s;
    s.name = malloc(20*sizeof(char));
    printf("Enter student name: ");
    scanf("%s",s.name);
    printf("Enter class: ");
    scanf("%d",&s.class);
    printf("Enter roll: ");
    scanf("%d",&s.roll);
    printf("Name\tClass\tRoll\n");
    printf("%s\t%d\t%d",s.name,s.class,s.roll);
    return 0;
}