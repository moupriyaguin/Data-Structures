#include<stdio.h>
#define MAX 5
typedef struct
{
    int data[MAX];
    int top;
}STACK;
void push(STACK *s, int v)
{
    if(s->top == MAX-1)
    {
        printf("Stack overflow\n");
        return;
    }
    s->top++;

    s->data[s->top] = v;
}
void pop(STACK *s, int *k)
{
    if(s->top == -1)
    {
        printf("Stack underflow");
        return;
    }
    *k = s->data[s->top];
    s->top = s->top - 1;
}
void display(STACK *s)
{
    for(int i = 0; i<s->top+1; i++)
    {
        printf("%d ",s->data[i]);
    }
    printf("\n");
}
int main()
{
    STACK s;
    s.top = -1;
    int n;
    int k;
    for(int i = 0; i < MAX; i++)
    {
        printf("Enter data: ");
        scanf("%d",&n);
        push(&s,n);
    }
    display(&s);
    pop(&s,&k);
    display(&s);
    printf("The deleted element is %d",k);
    return 0;
}