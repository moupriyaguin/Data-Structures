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
void delete(struct node *head,int pos)
{
    struct node *ptr;
    ptr = head;
    int i=0;
    while(ptr != NULL)
    {
        if(i == pos)
        {
            (ptr->previous)->next = ptr->next;
            break;
        }
        ptr = ptr->next;
        i++;
    }
}

void display(struct node *head)
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
    display(head);
    int pos;
    printf("Enter index position of node to be deleted: ");
    scanf("%d",&pos);
    delete(head,pos);
    display(head);
    return 0;
}