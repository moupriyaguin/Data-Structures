#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,*p;
    
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    printf("Enter the number of columns: ");
    scanf("%d",&m);

    p = malloc(n*m*sizeof(int));

    printf("Enter the numbers:\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",(p+i)+j);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",*(p+i)+j);
        }
        printf("\n");
    }
    return 0;
}