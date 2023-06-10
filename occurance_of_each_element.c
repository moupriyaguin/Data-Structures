#include<stdio.h>
int main()
{
    int b;
    printf("Enter the size of array: ");
    scanf("%d",&b);
    int a[b];
    int p[b];
    int i,j,c=1,t=0,temp;
    for(i=0;i<b;i++)
    {
        printf("Enter element %d : ",c);
        scanf("%d",&a[i]);
        c++;
    }
    c=1;
    for(i=0;i<b;i++)
    printf("%d\t",a[i]);
    printf("\n");
    for(i=0;i<b;i++)
    {
        t=0;
        for(j=0;j<b;j++)
        {
            if(a[j]==a[i])
            {
                t++;
            }
            
        }
        p[i]=t;
    }
    for(i=0;i<b;i++)
    {
        if(p[i]>1)
        printf("Element %d has occured %d times\n",c,p[i]);
        else
        printf("Element %d has occured %d time\n",c,p[i]);
        c++;
    }
    return 0;
}