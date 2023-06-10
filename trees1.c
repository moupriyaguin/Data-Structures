#include<stdio.h>
#include<stdlib.h>
struct node
{
    int item;
    struct node *left;
    struct node *right;
};
struct node *create(int);
struct node *InsertLeft(struct node *,int);
struct node *InsertRight(struct node*,int);
void InorderTraversal(struct node *);
int main()
{
    struct node *root = create(1);
    InsertLeft(root,2);
    InsertRight(root,3);
    InsertLeft(root->left,4);
    InsertRight(root->left,6);
    printf("The inorder traversal of the tree is: \n");
    InorderTraversal(root);
    return 0;
}
struct node *create(int value)
{
    struct node *newnode = malloc(sizeof(struct node*));
    newnode->item = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct node *InsertLeft(struct node *root,int value)
{
    root->left = create(value);
    return root->left;
}
struct node *InsertRight(struct node *root,int value)
{
    root->right = create(value);
    return root->right;
}
void InorderTraversal(struct node *root)
{
    if(root==NULL)
    return;
    InorderTraversal(root->left);
    printf("%d ->",root->item);
    InorderTraversal(root->right);
}