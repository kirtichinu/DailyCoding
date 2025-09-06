#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int arr[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
int max(struct Node*p)
{
    int max = INT_MIN;
    while(p)
    {
        if(p->data > max)
        {
            max = p->data;
        }
        p= p->next;
    }
    return max;

}

int main()
{
    int arr[] = {3,5,7,10,13,15,17};
    create(arr,7);
    printf("Max is = %d",max(first));
    return 0;

}