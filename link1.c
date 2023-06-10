#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head = NULL, *tail = NULL;

void create();
void display();

int main()
{
    create();
    display();
    return 0;
}
void create()
{
    struct node *cur;
    for(int i=0;i<5;i++)
    {
        cur = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&cur->data);
        cur->next = NULL;
        if(head == NULL)
        {
            tail = head = cur;
        }
        else
        {
            tail->next = cur;
            tail = cur;
        }
    }
}
void display()
{
    struct node *temp;
    temp = head;
    while(temp->next != NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
        if(temp->next == NULL)
        {
            printf("%d",temp->data);
        }
    }
}