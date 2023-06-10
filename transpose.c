#include<stdio.h>
int main()
{
    int a[3][3];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The array is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int temp;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)//00,01,10,20,02
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
        temp = a[2][1];
        a[2][1] = a[1][2];
        a[1][2] = temp;
        break;
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}