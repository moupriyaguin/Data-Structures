#include<stdio.h>
int main()
{
    int a[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    printf("The original array is ");
    for(int i=0;a[i]!='\0';i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int b,c,d;
    printf("Enter the position in which you want to insert the element : ");
    scanf("%d",&b);
    printf("Enter the element you want to insert : ");
    scanf("%d",&c);
    for(int i=0;i<15;i++)
    {
        if(i==(b-1))
        {
            d = a[i];
            a[i]=c;
            
        }
        else if(i>(b-1))
        {
            c=a[i];
            a[i]=d;
            d=c;
        }
    }
    for(int i=0;i<15;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}