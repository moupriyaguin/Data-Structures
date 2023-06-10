#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *create(struct node *head,struct node *tail,int n)
{
	struct node *cur;
	for(int i=0;i<n;i++)
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
struct node *sort(struct node *head)
{
    struct node *ptr1,*ptr2;
    ptr1 = head;
	ptr2 = ptr1->next;
    int count = 0; 
    int temp;
   
    while(ptr2 != NULL)
    {
        if(ptr2->data < ptr1->data)
        {
            temp = ptr2->data;
            ptr2->data = ptr1->data;
            ptr1->data = temp;
            count++;
        }
        if(ptr2->next == NULL && count !=0)
        {
            count = 0;
            ptr1 = head;
			ptr2 = ptr1->next;
			continue;
        }
        ptr1 = ptr1->next;
		ptr2 = ptr2->next;
    }
    return head;
}
void display(struct node *head)
{
	struct node *ptr;
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d",ptr->data);
        ptr = ptr->next;
	}
    printf("\n");
}
int main()
{
	struct node *head = NULL, *tail = NULL;
	int n;
	printf("Enter number of nodes: ");
	scanf("%d",&n);
	head = create(head,tail,n);
	display(head);
    head = sort(head);
    display(head);
	return 0;
}