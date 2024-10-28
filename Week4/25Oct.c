#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*Head= NULL;

void create(int arr[], int n)
{
    int i;
    struct Node *t, *last;

    Head= (struct Node*)malloc(sizeof(struct Node));
    Head->data = arr[0];
    Head->next = Head;
    last = Head;

    for(i=1;  i<n;i++)
    {
        t= (struct Node*)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(struct Node *h)
{
    do{
        printf("%d\t", h->data);
        h= h->next;
    }while(h!=Head);
    printf("\n");
}

int main()
{
    int arr[]= {3,5,7,9,11};
    create(arr,5);
    display(Head);
    return 0;
}