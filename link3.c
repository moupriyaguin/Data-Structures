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
    struct node *insert,*temp,*h;
    int p;
    insert = malloc(sizeof(struct node));
    printf("Enter the position where the node needs to be inserted: ");
    scanf("%d",&p);
    printf("Enter data of the node to be inserted: ");
    scanf("%d",&insert->data);
    temp = head;
    for(int i=2;i<p;i++)
    {
        temp = temp->next;
    }
    h = temp->next;
    temp->next = insert;
    insert->next = h;
    display();
    return 0;
}
void create()
{
    struct node *cur;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
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
    printf("\n");
}