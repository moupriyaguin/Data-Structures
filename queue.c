#include<stdio.h>
#define MAX 5
typedef struct 
{
    int data[MAX];
    int f;
    int r;
}QUEUE;
void insert(QUEUE *q, int v)
{
    if(q->r == MAX-1)
    {
        printf("The queue is full\n");
        return;
    }
    else if(q->r == -1)
    {
        q->r  = q->f = 0;
    }
    else
    {
        q->r++;
        q->data[q->r] = v;
    }
}
void display(QUEUE *q)
{
    for(int i = 0;i <= (q->r); i++)
    {
        printf("%d",q->data[i]);
    }
    printf("\n");
}
void delete(QUEUE *q, int *k)
{
    if(q->r == -1)
    {
        printf("The queue is empty\n");
        return;
    }
    else if(q->f == q->r)
    {
        *k = q->data[q->r];
        q->r = q->f = -1;
    }
    else
    {
        *k = q->data[q->f];
        for(int i = q->f + 1; i <= q->r ; i++)
        {
            q->data[i-1] = q->data[i];
        }
        q->r = q->r - 1;
    }
}
int main()
{
    QUEUE q;
    q.f = q.r = -1;
    int n,k;
    for(int i=0;i<MAX;i++)
    {
        printf("Enter data: ");
        scanf("%d",&n);
        insert(&q,n);
    }
    delete(&q, &k);
    display(&q);
    return 0;
}