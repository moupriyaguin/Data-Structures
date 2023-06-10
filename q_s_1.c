#include<stdio.h>
#include<stdlib.h>

#define size 10
int top = -1, stack[size];
void push(int i)
{
    if(top == size-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = i;
    }
}

int pop()
{
    if(top == -1)
    {
        printf("Stack underflow\n");
        exit(0);
    }
    else
    {
        int data = stack[top];
        top--;
        return data;
    }
}

int front = -1, rear = -1, queue[size];
void enqueue(int x)
{
    if(rear == size-1)
    {
        printf("Queue overflow");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
            rear++;
            queue[rear] = x;
        }
    }
}

int dequeue()
{
    if(front == -1)
    {
        printf("Queue underflow\n");
        exit(0);
    }
    else
    {
        int data = queue[front];
        front++;
        return data;
    }
}
int main()
{
    int x;
    for(int i=0;i<size;i++)
    {
        push(dequeue());
    }
    for(int j=0;j<size;j++)
    {
        printf("%d",stack[j]);
    }
    return 0;
}