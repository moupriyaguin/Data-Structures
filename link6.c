//insert in between two nodes
//insert at the beginning
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create(struct node *head,struct node *tail)
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
    return head;
}
void add_in_between(struct node *head,int pos,int data)
{
    struct node *temp,*ptr;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    ptr = head;
    int i=1;
    while(ptr != NULL)
    {
        if(i == pos-1)
        {
            temp->next = ptr->next;
            ptr->next = temp;
            break;
        }
        ptr = ptr->next;
        i++;
    }
}
void add_at_end(struct node *h,int d)
{
    struct node *temp,*ptr;
    
    temp = malloc(sizeof(struct node));
    temp->data = d;
    ptr = h;
    while(ptr != NULL)
    {
        if(ptr->next == NULL)
        {
            ptr->next = temp;
            temp->next = NULL;
        }
        ptr = ptr->next;
    }
}
void display(struct node *h)
{
    struct node *temp;
    temp = h;
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
    head = create(head,tail);
    display(head);
    int d,pos;
    printf("Enter data of node to be inserted at end: ");
    scanf("%d",&d);
    printf("Enter the position: ");
    scanf("%d",&pos);
    add_in_between(head,pos,d);
    display(head);
    return 0;
}