#include <stdio.h>

int main()
{
    int a[4];
    int t = 0,q,p;
    printf("Enter the elements of the array\n");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    
    q = a[0];

    for(int i=0;i<4;i++)
    {
        p = a[i];
            if(q<p)
            {
                q = p;  
            }
    }

    printf("The maximum element of the array is %d\n",q);

    q = a[0];

    for(int i=0;i<4;i++)
    {
        p = a[i];
            if(q>p)
            {
                q = p;  
            }
    }

    printf("The minimum element of the array is %d",q);

    return 0;
}