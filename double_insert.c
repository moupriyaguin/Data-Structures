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
void insert_between_node(struct node *head,int pos,int d)
{
    struct node *ptr,*cur;
    ptr = head;
    int i=1;
    while(ptr != NULL)
    {
        if(i == pos)
        {
            cur = malloc(sizeof(struct node));
            cur->data = d;
            (ptr->previous)->next = cur;
            cur->previous = ptr->previous;
            cur->next = ptr;
            ptr->previous = cur;
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
    int pos,data;
    printf("Enter index position where the node needs to be inserted: ");
    scanf("%d",&pos);
    printf("Enter the data of node to be inserted: ");
    scanf("%d",&data);
    insert_between_node(head,pos,data);
    display(head);
    return 0;
}