#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

// create ll

void create(int arr[], int n)
{
    int i;
    struct Node *t, *last;
    // malloc for allocationg memory to first node

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;

    // loop for allocation of other nodes
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}

int main()
{
    int arr[] = {3, 5, 7, 10, 15};
    create(arr, 5);
    display(first);
    return 0;
}