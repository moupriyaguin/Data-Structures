#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *previous;
    int data;
    struct node *next;
};
struct node *create(struct node **head,struct node *tail)
{
    struct node *cur;
    for(int i=0;i<5;i++)
    {
        cur = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&cur->data);
        cur->next = NULL;
        cur->previous = NULL;
        if(*head == NULL)
        {
            tail = *head = cur;
        }
        else
        {
            cur->previous = tail;
            tail->next = cur;
            tail = cur;
        }
    }
    return tail;
}
void display_from_last_node(struct node *tail)
{
    struct node *temp;
    temp = tail;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->previous;
    }
    printf("\n");
}
void display_from_first_node(struct node *head)
{
    struct node *temp;
    temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    struct node *head = NULL,*tail = NULL;
    tail = create(&head,tail);
    display_from_last_node(tail);
    display_from_first_node(head);
    return 0;
}