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
            head = tail = cur;
        }
        else
        {
            tail->next = cur;
            tail = cur;
        }
    }
    return head;
}
void display();
struct node*del_by_pos(struct node *head,int data);
int main()
{
    struct node *head = NULL, *tail = NULL;
    int pos;
    head = create(head,tail);
    display(head);
    int d;
    printf("Enter data to be deleted: ");
    scanf("%d",&d);
    head = del_by_pos(head,d);
    display(head);
    return 0;
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
struct node *del_by_pos(struct node *head,int d)
{
    struct node *temp,*ptr1,*ptr2;
    temp = head;
    while(temp != NULL)
    {
        if(d == head->data)
        {
            head = head->next;
            return head;
        }
        else if(temp->data == d)
        {
            ptr1->next = ptr2;
            return head;
        }
        ptr1 = temp;
        temp = temp->next;
        ptr2 = temp->next;
    }
}