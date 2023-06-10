#include<stdio.h>
#include<stdio.h>
#define max 5
typedef struct
{
    int data[max];
    int front;
    int rear;
}QUEUE;
typedef struct
{
    int data[max];
    int top;
}STACK;
void enqueue(QUEUE *q,int v)
{
    if(q->rear==max-1)
    {
        printf("Queue is full\n");
        return;
    }
    else if(q->rear==-1)
    {
        q->rear = q->front = 0;
        q->data[q->rear] = v;
    }
    else
    {
        q->rear++;
        q->data[q->rear] = v;
    }
}
void dequeue(QUEUE *q, int *k)
{
    if(q->rear==-1)
    {
        printf("Queue is empty\n");
        return;
    }
    else if(q->rear==q->front)
    {
        *k = q->data[q->rear];
        q->rear = q->front = -1;
    }
    else
    {
        *k = q->data[q->front];
        for(int i=q->front;i<q->rear;i++)
        {
            q->data[i] = q->data[i+1];
        }
        q->rear--;
    }
}
void display_s(STACK *s)
{
    for(int i=0;i<=s->top;i++)
    {
        printf("%d",s->data[i]);
    }
    printf("\n");
}
void push(STACK *s,int v)
{
    if(s->top==max)
    {
        printf("Stack is full\n");
        return;
    }
    else
    {
        s->top++;
        s->data[s->top] = v;
    }
}
void pop(STACK *s,int *k)
{
    if(s->top==-1)
    {
        printf("Stack is empty\n");
        return;
    }
    else
    {
        *k = s->data[s->top];
        s->top--;
    }
}
void display_q(QUEUE *q)
{
    for(int i=0;i<=q->rear;i++)
    {
        printf("%d",q->data[i]);
    }
    printf("\n");
}
int main()
{
    QUEUE q;
    STACK s;
    s.top = -1;
    q.rear = q.front = -1;
    int n,k;
    for(int i=0;i<max;i++)
    {
        printf("Enter data: ");
        scanf("%d",&n);
        push(&s,n);
    }
    display_s(&s);
    for(int i=0;i<max;i++)
    {
        pop(&s,&k);
        enqueue(&q,k);
    }
    display_q(&q);
    for(int i=0;i<max;i++)
    {
        dequeue(&q,&k);
        push(&s,k);
    }
    display_s(&s);
    return 0;
}