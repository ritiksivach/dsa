#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linkedListTraverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top, int value)
{
    if (isFull())
    {
        printf("stack overflow");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = value;
        n->next = top;
        top = n;
        return top;
    }
}
int pop(struct node **top)
{
    if (isEmpty(*top))
    {
        printf("stack underflow");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n = *top;
        int i = n->data;
        *top = (*top)->next;
        return i;
    }
}
int main()
{
    struct node *top = NULL;
    printf("%d\n",isEmpty(top));
    printf("%d\n",isFull());
    top = push(top, 7);
    top = push(top, 71);
    linkedListTraverse(top);
    printf("element poped is:%d\n", pop(&top));
    linkedListTraverse(top);
    printf("%d\n",isEmpty(top));
    printf("%d\n",isFull());
}