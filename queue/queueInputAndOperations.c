#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int f;
    int r;
    int size;
    int *arr;
};
int isEmpty(struct queue *s)
{
    if (s->f == s->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct queue *s)
{
    if ((s->r + 1) % (s->size) == s->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *s)
{
    if (isFull(s))
    {
        printf("queuefull\n");
    }
    else
    {
        printf("enter value to be entered");
        scanf("%d", &s->arr[s->r]);
        s->r = (s->r + 1) % (s->size);
    }
}
void dequeue(struct queue *s)
{
    if (isEmpty(s))
    {
        printf("queueEmpty\n");
    }
    else
    {
        s->f = (s->f + 1) % (s->size);
    }
}
void printQueue(struct queue *s)
{
    if (s->f == s->r)
    {
        printf("queue is empty\n");
    }
    else
    {
        for (int i = s->f; i < s->r; i = (i + 1) % (s->size))
        {
            printf("element at %d is%d \n", i + 1, s->arr[i]);
        }
    }
}
int main()
{
    struct queue *s = (struct queue *)malloc(sizeof(struct queue));
    s->f = 0;
    s->r = 0;
    s->size = 8;
    s->arr = (int *)malloc(s->size * sizeof(int));
    int n;

    printf("enter size for queue");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        enqueue(s);
    }

    printQueue(s);
    dequeue(s);
    dequeue(s);
    dequeue(s);
    printQueue(s);
    return 0;
}
