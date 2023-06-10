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
struct node *delete(struct node *head,int pos);
int main()
{
    struct node *head = NULL, *tail = NULL;
    int pos;
    head = create(head,tail);
    display(head);
    printf("Enter the index position to be deleted(indexing starts from zero): ");
    scanf("%d",&pos);
    head = delete(head,pos);
    display(head);
    return 0;
}
void display(struct node *head)
{
    struct node *temp;
    temp = head;
    while(temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
struct node *delete(struct node *head,int pos)
{
    struct node *temp,*ptr;
    temp = head;
    ptr = temp->next;
    int i=0;
    while(temp != NULL)
    {
        if(pos == 0)
        {
            head = temp->next;
            return head;
        }
        if(i == pos-1)
        {
            temp->next = ptr->next;
            return head;
        }
        temp = temp->next;
        ptr = temp->next;
        i++;
    }
}