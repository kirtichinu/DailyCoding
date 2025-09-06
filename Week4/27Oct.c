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
    //display 
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}

int count(struct Node *p)
{
    //count length
    int length = 0;
    while(p)
    {
        length++;
        p = p->next;
    }
    return length;

}
void insert(struct Node *p, int index, int x)
{
    struct Node *t;
    if (index < 0 || index > count(p))
    {
        return;
    }
    int i;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;

    if (index == 0)//if at the starting of the linked list
    {
        t->next = first;
        first = t;
    }
    else//if in between anywhere traversing hs+as to be done
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}
int main()
{
    int arr[]={3,5,7,9,11};
    create(arr,5);
    display(first);
    printf("\n\n");
    insert(first,0,1);
    display(first);
    return 0;
}