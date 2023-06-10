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
struct node *add_at_beg(struct node *head,int data)
{
    struct node *temp;
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
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
    int d1;
    printf("Enter data of node to be inserted at beginning: ");
    scanf("%d",&d1);
    int d2;
    printf("Enter data of node to be inserted at end: ");
    scanf("%d",&d2);
    head = add_at_beg(head,d1);
    add_at_end(head,d2);
    display(head);
    return 0;
}