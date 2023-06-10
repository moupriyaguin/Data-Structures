#include<stdio.h>
int main()
{
    int a[12]={5,6,3,4,3,8,1,3,7,4,2,6};
    printf("The array is ");
    for(int i=0;i<12;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int b,t=0;
    printf("Enter the index whose occurance needs to be checked : ");
    scanf("%d",&b);
    for(int i=0;i<12;i++)
    {
        if(i==b)
        {
            for(int j=i;j>=0;j--)
            {
                if(a[j]==a[i])
                {
                    t++;
                }
            }
            for(int k=i+1;k<12;k++)
            {
                if(a[k]==a[i])
                {
                    t++;
                }
            }
            break;
        }
    }
    printf("The given element is repeated %d times",t);
    return 0;
}