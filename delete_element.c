#include<stdio.h>
int main()
{
    int a[10]={8,9,6,4,5,8,2,1,3,11};
    printf("The original array is ");
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int b;
    printf("Enter the position from where the element needs to be deleted : ");
    scanf("%d",&b);
    for(int i=0;i<10;i++)
    {
        if(i>=(b-1))
        {
            a[i]=a[i+1];
        }
    }
    for(int i=0;i<9;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}