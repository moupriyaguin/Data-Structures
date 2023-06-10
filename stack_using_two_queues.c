#include<stdio.h>
#define MAX 5
typedef struct 
{
    int data[MAX];
    int top;
}STACK;
typedef struct
{
    int data[MAX];
    int front;
    int rear;
}QUEUE1;
typedef struct
{
    int data[MAX];
    int front;
    int rear;
}QUEUE2;
void push(STACK *s,int v)
{
    if(s->top==MAX)
    {
        printf("The stack is full\n");
        return;
    }
    s->top++;
    s->data[s->top] = v;
}
void pop(STACK *s,int *k)
{
    if(s->top==-1)
    {
        printf("The stack is empty\n");
        return;
    }
    *k = s->data[s->top];
    s->top--;
}
void enqueue1(QUEUE1 *q,int v)
{
    if(q->rear==MAX)
    {
        printf("The queue is full\n");
        return;
    }
    else if(q->rear==q->front)
    {
        q->rear=q->front=0;
        q->data[q->rear] = v;
        q->rear++;
    }
    else
    {
        q->data[q->rear] = v;
        q->rear++;
    }
}
void dequeue1(QUEUE1 *q,int *k)
{
    if(q->rear==-1)
    {
        printf("The queue is empty\n");
        return;
    }
    else if(q->rear==q->front)
    {
        *k = q->data[q->rear];
        q->rear=q->front=-1;
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
void enqueue2(QUEUE2 *q,int v)
{
    if(q->rear==MAX)
    {
        printf("The queue is full\n");
        return;
    }
    else if(q->rear==q->front)
    {
        q->rear=q->front=0;
        q->data[q->rear] = v;
        q->rear++;
    }
    else
    {
        q->data[q->rear] = v;
        q->rear++;
    }
}
void dequeue2(QUEUE2 *q,int *k)
{
    if(q->rear==-1)
    {
        printf("The queue is empty\n");
        return;
    }
    else if(q->rear==q->front)
    {
        *k = q->data[q->rear];
        q->rear=q->front=-1;
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
void display_q1(QUEUE1 *q)
{
    for(int i=0;i<q->rear;i++)
    {
        printf("%d",q->data[i]);
    }
    printf("\n");
}
void display_q2(QUEUE2 *q)
{
    for(int i=0;i<MAX;i++)
    {
        printf("%d",q->data[i]);
    }
    printf("\n");
}
int main()
{
    STACK s;
    s.top = -1;
    QUEUE1 q1;
    QUEUE2 q2;
    int n,k;
    q1.rear = q1.front = -1;
    q2.rear = q2.front = -1;
    for(int i=0;i<MAX;i++)
    {
        printf("Enter data: ");
        scanf("%d",&n);
        enqueue1(&q1,n);
    }
    display_q1(&q1);
    for(int i=0;i<MAX;i++)
    {
        dequeue1(&q1,&k);
        enqueue2(&q2,k);
    }
    display_q2(&q2);
    for(int i=0;i<MAX;i++)
    {
        dequeue2(&q2,&k);
        push(&s,k);
        // printf("%d",s.top);
    }
    // s.top = 4;
    // printf("%d",s.top);
    display_s(&s);
    return 0;
}