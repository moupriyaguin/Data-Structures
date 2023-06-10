#include<stdio.h>
#define MAX 5
typedef struct 
{
    int data[MAX];
    int f;
    int r;
}QUEUE;

typedef struct
{
    int data[MAX];
    int top;
}STACK1;

typedef struct
{
    int data[MAX];
    int top;
}STACK2;

void enqueue(QUEUE *q, int v)
{
    if(q->r == MAX)
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
        q->data[q->r] = v;
        q->r++;
    }
}
void display1(QUEUE *q)
{
    for(int i = 0;i < (q->r); i++)
    {
        printf("%d",q->data[i]);
    }
    printf("\n");
}
void dequeue(QUEUE *q, int *k)
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
        
        for(int i = q->f + 1; i < q->r ; i++)
        {
            q->data[i-1] = q->data[i];
        }
        q->r = q->r - 1;
    }
}
void push1(STACK1 *s,int v)
{
    if(s->top == MAX)
    {
        printf("The stack is full\n");
        return;
    }
    
    s->data[s->top] = v;
    s->top++;
}
void pop1(STACK1 *s,int *k)
{
    if(s->top == -1)
    {
        printf("The stack is empty\n");
        return;
    }
    *k = s->data[s->top];
    s->top = s->top - 1;
}
void push2(STACK2 *s,int v)
{
    if(s->top == MAX)
    {
        printf("The stack is full\n");
        return;
    }

    s->data[s->top] = v;
    s->top++;
}
void pop2(STACK2 *s,int *k)
{
    if(s->top == -1)
    {
        printf("The stack is empty\n");
        return;
    }
    *k = s->data[s->top];
    s->top = s->top - 1;
}
void display2(STACK1 *s)
{
    for(int i=0;i<s->top;i++)
    {
        printf("%d ",s->data[i]);
    }
    printf("\n");
}
void display3(STACK2 *s)
{
    for(int i=0;i<s->top;i++)
    {
        printf("%d ",s->data[i]);
    }
    printf("\n");
}
int main()
{
    QUEUE q;
    STACK1 s1;
    STACK2 s2;
    int k;
    s1.top = 0;
    s2.top = 0;
    q.r = q.f = 0;
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    enqueue(&q,5);
    display1(&q);
    // printf("%d\n",q.r);
    for(int i=0;i<5;i++)
    {
        dequeue(&q,&k);
        // printf("%d ",i);
        push1(&s1,k);
    }
    // display2(&s1);
    s1.top--;
    for(int i=0;i<5;i++)
    {
        pop1(&s1,&k);
        // printf("%d ",k);
        push2(&s2,k);
    }
    
    pop2(&s2,&k);
    // display3(&s2);
    printf("%d\n",s2.top);
    for(int i=s2.top;i>=0;i--)
    {
        pop2(&s2,&k);
        printf("%d ",s2.top);
        // printf("%d ",k);
        push1(&s1,k);
        // display2(&s1);
    }
    push1(&s1,k);
    display2(&s1);
    return 0;
}