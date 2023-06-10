#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p;
    
    printf("Enter the number of elements to be entered: ");
    scanf("%d",&n);
    p = malloc(n*sizeof(int));

    printf("Enter the numbers:\n");


    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    
    return 0;
}