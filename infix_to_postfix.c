#include<stdio.h>
#include<string.h>
#define MAX 10
char str[MAX];
char a[20];

typedef struct
{
    char data[MAX];
    int top;
}STACK;

char k;
void push(STACK *s, char v)
{
    if(s->top == MAX-1)
    {
        printf("Stack overflow\n");
        return;
    }
    s->top++;

    s->data[s->top] = v;
}
void pop(STACK *s, char *k)
{
    if(s->top == -1)
    {
        printf("Stack underflow");
        return;
    }
    *k = s->data[s->top];
    s->top = s->top - 1;
}
int ifoperand(char c)
{
    return(c>='a'&&c<='z')||(c>='A'&&c<='Z');
}
int precedence(char c)
{
    switch(c)
    {
        case '*': 
        case '/':
        return 1;
        case '+':
        case '-':
        return 2;
        case '^':
        return 3;
    }
}
void infix_to_postfix()
{
    STACK s;
    s.top = -1;
    push(&s,'#');
    int j=0,d,e,f;
    for(int i=0;str[i]!='\0';i++)
    {
        f = ifoperand(str[i]);
        if(f==1)
        {
            a[j] = str[i];
        }
        else
        {
            d = precedence(str[i]);
            for(int t=s.top;t>0;t--)
            {
                e = precedence(s.data[t]);
                if(d>e)
                {
                    push(&s,str[i]);
                }
                else
                {
                    pop(&s,&k);
                    a[j] = k;
                    push(&s,str[i]);
                }
            }
        }
        j++;
    }
    pop(&s,&k);
    a[j] = k;
}
int main()
{
    printf("Enter infix expression: ");
    scanf("%s",str);
    infix_to_postfix();
    for(int i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}