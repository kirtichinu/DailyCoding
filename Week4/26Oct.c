#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int arr[], int n)
{
    if (n <= 0)
        return; // Handle case for empty array

    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
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
        printf("%d\n", p->data);
        p = p->next;
    }
}

int isSorted(struct Node *p)
{
    int x = -65536; // Initialize to a very low value
    while (p != NULL)
    {
        if (p->data < x)
        {
            return 0; // List is not sorted
        }
        else
        {
            x = p->data;
            p = p->next;
        }
    }
    return 1; // List is sorted
}

void freeList(struct Node *p)
{
    struct Node *temp;
    while (p != NULL)
    {
        temp = p;
        p = p->next;
        free(temp); // Free the memory
    }
}

int main()
{
    int arr[] = {3, 5, 7, 12, 15};
    create(arr, 5);

    // Check if the list is sorted
    if (isSorted(first))
    {
        printf("The list is sorted.\n");
    }
    else
    {
        printf("The list is not sorted.\n");
    }

    printf("List elements:\n");
    display(first);

    // Free the allocated memory
    freeList(first);

    return 0;
}