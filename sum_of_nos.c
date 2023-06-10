#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p;
    
    printf("n = ");
    scanf("%d",&n);
    p = malloc(n*sizeof(int));

    printf("Enter the numbers:\n");

    int sum = 0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
        sum = sum + *(p+i);

    }

    printf("The sum of n numbers is: %d",sum);
    
    return 0;
}