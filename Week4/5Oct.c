// linear queue

#include <stdio.h>
#include <stdlib.h>
#define Size 4
typedef struct Queue
{
    int q[Size];
    int f, r;
} queue;

void enqueue(queue *qu, int x)
{
    if ((qu->r) == Size - 1)
    {
        printf("Queue is full\n");
        return;
    }
    if (qu->r == -1)
    {
        (qu->f)++;
    }
    (qu->r)++;
    qu->q[qu->r] = x;
}

int dequeue(queue *qu)
{
    int x;
    if ((qu->r) == -1)
    {
        printf("Queue is empty\n");
        return -9999;
    }
    x = qu->q[qu->f];
    if ((qu->f) == (qu->r))
    {
        (qu->f) = (qu->r) = -1;
    }
    else
    {
        (qu->f)++;
    }
    return x;
}

void display(queue qu)
{
    int i;
    printf("Queue elements = \n");
    for (i = (qu.f); i <= (qu.r); i++)
    {
        printf("%d\n", qu.q[i]);
    }
}

void main()
{
    queue qu;
    qu.r = -1;
    qu.f = -1;
    int ch, x;

    do
    {
        printf("____MENU_____\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice = ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("enter the element = ");
            scanf("%d", &x);
            enqueue(&qu, x);
            break;

        case 2:
            x = dequeue(&qu);
            if (x != -9999)
            {
                printf("Element %d removed\n", x);
            }
            break;

        case 3:
            display(qu);
            break;

        case 4:
            exit(0);
        default:
            printf("Wrong input! \n");
            break;
        }
    } while (1);
}