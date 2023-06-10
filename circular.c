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
    for(int i=1;i<=5;i++)
    {
        cur = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&cur->data);
        cur->next = NULL;
        if(head == NULL)
        {
            tail = head = cur;
        }
        else if(i==5)
        {
           tail->next = cur;
           tail = cur;
           tail->next = head;
        }
        else
        {
            tail->next = cur;
            tail = cur;
        }
    }
    return head;
}
void display(struct node *head)
{
    struct node *ptr;
    ptr = head;
    int i=0;
    while(i < 6)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
        i++;
    }
}
int main()
{
    struct node *head=NULL,*tail=NULL;
    head = create(head,tail);
    display(head);
    return 0;
}