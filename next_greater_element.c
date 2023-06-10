#include<stdio.h>
int main()
{
    int a[5];
    int t;
    printf("Enter the elements of the array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            t=0;
            if(a[j]>a[i])
            {
                t++;
                printf("%d  %d\n",a[i],a[j]);
                break;
            }
        }
        if(t!=1)
        printf("%d -1\n",a[i]);
    }
    return 0;
}